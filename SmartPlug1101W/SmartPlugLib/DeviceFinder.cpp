#include "DeviceFinder.h"
#include <UdpClient.h>
#include <QNetworkAddressEntry>
#include <IPEndPoint.h>
#include "SmartPlug.h"
#include <list>

bool DeviceFinder::getIsStillSearching() const
{
    return isStillSearching;
}

void DeviceFinder::setIsStillSearching(bool value)
{
    isStillSearching = value;
}

int DeviceFinder::getTimeoutPeriod() const
{
    return timeoutPeriod;
}

void DeviceFinder::setTimeoutPeriod(int value)
{
    timeoutPeriod = value;
}

quint16 DeviceFinder::getListeningPort() const
{
    return listeningPort;
}

void DeviceFinder::setListeningPort(quint16 value)
{
    listeningPort = value;
}

quint16 DeviceFinder::getSendingPort() const
{
    return sendingPort;
}

void DeviceFinder::setSendingPort(quint16 value)
{
    sendingPort = value;
}
DeviceFinder::DeviceFinder()
{

}

DeviceFinder::~DeviceFinder()
{

}

DeviceFinder::DeviceFinder(quint16 sendingPort, quint16 listeningPort)
{
    DeviceFinder(sendingPort, listeningPort, 45000);
}

DeviceFinder::DeviceFinder(quint16 sendingPort, quint16 listeningPort, int timeoutPeriod)
{
    this->setSendingPort(sendingPort);
    this->setListeningPort(listeningPort);
    this->setTimeoutPeriod(timeoutPeriod);
}

void DeviceFinder::findDevices(const QNetworkAddressEntry &address)
{
    setIsStillSearching(true);
    std::list<SmartPlug *> smartPlugs;


    UdpClient *listenClient = new UdpClient(sendingPort, address);
    IPEndPoint *endPoint = new IPEndPoint(address, listeningPort);

    QByteArray *bytesToSend = new QByteArray("test");

    listenClient->send(bytesToSend, endPoint);

    setIsStillSearching(false);
}

