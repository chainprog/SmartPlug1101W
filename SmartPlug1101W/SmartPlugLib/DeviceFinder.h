#ifndef DEVICEFINDER_H
#define DEVICEFINDER_H

#include <QNetworkAddressEntry>

class DeviceFinder
{
private:
    long sendingPort;
    long listeningPort;
    int timeoutPeriod;
    bool isStillSearching;

    void setSendingPort(long value);
    void setListeningPort(long value);
    void setTimeoutPeriod(int value);
    void setIsStillSearching(bool value);

public:
    DeviceFinder();
    ~DeviceFinder();

    DeviceFinder(long sendingPort, long listeningPort);

    DeviceFinder(long sendingPort, long listeningPort, int timeoutPeriod);

    void findDevices(QNetworkAddressEntry *address);

    bool getIsStillSearching() const;

    int getTimeoutPeriod() const;

    long getListeningPort() const;

    long getSendingPort() const;

};

#endif // DEVICEFINDER_H
