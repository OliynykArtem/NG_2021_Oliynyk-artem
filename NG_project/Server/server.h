#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QFile>
#include <QMessageBox>
#include <QObject>


QT_BEGIN_NAMESPACE
namespace Ui { class Server; }
QT_END_NAMESPACE

class Server : public QMainWindow
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();

private slots:
    void Choose_file();
    void Start_server();
    void send_file();

private:
    Ui::Server *ui;
    QTcpServer *m_server;
    QTcpSocket* m_client;
    QString file_content;
    QString file_name;

};
#endif // SERVER_H
