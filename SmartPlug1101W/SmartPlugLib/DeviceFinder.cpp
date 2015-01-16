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

long DeviceFinder::getListeningPort() const
{
    return listeningPort;
}

void DeviceFinder::setListeningPort(long value)
{
    listeningPort = value;
}

long DeviceFinder::getSendingPort() const
{
    return sendingPort;
}

void DeviceFinder::setSendingPort(long value)
{
    sendingPort = value;
}
DeviceFinder::DeviceFinder()
{

}

DeviceFinder::~DeviceFinder()
{

}

DeviceFinder::DeviceFinder(long sendingPort, long listeningPort)
{
    DeviceFinder(sendingPort, listeningPort, 45000);
}

DeviceFinder::DeviceFinder(long sendingPort, long listeningPort, int timeoutPeriod)
{
    this->setSendingPort(sendingPort);
    this->setListeningPort(listeningPort);
    this->setTimeoutPeriod(timeoutPeriod);
}

void DeviceFinder::findDevices(QNetworkAddressEntry *address)
{
    setIsStillSearching(true);
    std::list<SmartPlug *> smartPlugs;

    UdpClient *listenClient = new UdpClient(sendingPort, address);
    IPEndPoint *endPoint = new IPEndPoint(address, listeningPort);

    QByteArray bytesToSend;

    listenClient->send(bytesToSend, endPoint);

    setIsStillSearching(false);
}

