#ifndef DEVICEFINDER_H
#define DEVICEFINDER_H

#include <QNetworkAddressEntry>

class DeviceFinder
{
private:
    quint16 sendingPort;
    quint16 listeningPort;
    int timeoutPeriod;
    bool isStillSearching;

    void setSendingPort(quint16 value);
    void setListeningPort(quint16 value);
    void setTimeoutPeriod(int value);
    void setIsStillSearching(bool value);

public:
    DeviceFinder();
    ~DeviceFinder();

    DeviceFinder(quint16 sendingPort, quint16 listeningPort);

    DeviceFinder(quint16 sendingPort, quint16 listeningPort, int timeoutPeriod);

    void findDevices(const QNetworkAddressEntry &address);

    bool getIsStillSearching() const;

    int getTimeoutPeriod() const;

    quint16 getListeningPort() const;

    quint16 getSendingPort() const;

};

#endif // DEVICEFINDER_H
