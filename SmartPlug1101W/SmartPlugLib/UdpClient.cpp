#include "UdpClient.h"
#include <QObject>

UdpClient::UdpClient(long sendingPort, QNetworkAddressEntry senderAddress)
{
    hostAddress = senderAddress;
    this->sendingPort = sendingPort;
    sendSocket = new QUdpSocket();
    receiveSocket = new QUdpSocket();
    sendSocket->bind(hostAddress.ip(), sendingPort);
    connect(receiveSocket, SIGNAL(readyRead()), this, SLOT(readResponse()));
}

UdpClient::~UdpClient()
{

}

void UdpClient::send(QByteArray *bytesToSend, IPEndPoint *endPoint) {
    receiveSocket->bind(hostAddress.broadcast(), endPoint->getReceivePort());
    sendSocket->write()
    sendSocket->writeDatagram(bytesToSend->data(), bytesToSend->size(), endPoint->getEndPointAddress().broadcast(), (quint16)sendingPort);
}

void UdpClient::readResponse() {
    QByteArray readBuffer;
    //readBuffer.resize();
}
