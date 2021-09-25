#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Server)
{
    ui->setupUi(this);
    connect(ui->b_Choose_file, &QPushButton::clicked, this, &Server::Choose_file);
    connect(ui->b_Start_server, &QPushButton::clicked, this, &Server::Start_server);
}

Server::~Server()
{
    delete ui;
}

void Server::Choose_file()
{
    QString file_address = QFileDialog::getOpenFileName(this);

    QFile file(file_address);
    if(!file.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::information(this,"Error", "Path not correct");

    QTextStream stream(&file);
    QString buffer = stream.readAll();
    file_content = buffer;

    QFileInfo info(file_address);
    file_name = info.fileName()+"\n";
    QMessageBox::information(this, "Server", "You have selected a file named: "+file_name);
}

void Server::Start_server()
{
    m_server = new QTcpServer();
    m_server->listen(QHostAddress("0.0.0.0"), 5555);

    if(m_server->isListening())
        QMessageBox::information(this, "Server", "Yes, server is listening");
    else
        QMessageBox::information(this, "Server", "Oops, server is not listening");

    connect(m_server, &QTcpServer::newConnection, this, &Server::send_file);

}

void Server::send_file()
{
    m_client = m_server->nextPendingConnection();

    QByteArray file_n = file_name.toUtf8();
    QByteArray data = file_content.toUtf8();

    m_client->write(file_n + data);
}
