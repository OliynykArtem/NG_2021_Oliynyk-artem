#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    connect(ui->b_connect, &QPushButton::clicked, this, &Client::connectToServer);

    m_socket = new QTcpSocket;
    connect(m_socket, &QTcpSocket::readyRead, this, &Client::Download_file);
    connect(m_socket, &QTcpSocket::connected, this, &Client::connected);

}

Client::~Client()
{
    delete ui;
}

void Client::connectToServer()
{
    m_socket->connectToHost(ui->l_ip->text(), ui->s_port->value());
}

void Client::connected()
{
    QMessageBox::information(this, "Client", "Connection established");
}

void Client::Download_file()
{
    QByteArray content = m_socket->readAll();
    QByteArray name = content;
    int index = content.indexOf("\n");
    name.remove(index, content.length());

    QFile file("C:/test/" + name);
    file.open(QIODevice::WriteOnly);
    file.write(content);
    file.close();

}

