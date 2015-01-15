#ifndef SMARTPLUG_H
#define SMARTPLUG_H

#include <string>
#include <list>


class SmartPlug
{
    private:
        int id;
        int port;
        std::string landingPage;
        std::string userName;
        std::string password;
        std::string model;
        std::string softwareVersion;
        std::string name;

    public:
        SmartPlug();
        ~SmartPlug();
        std::string getName() const;
        void setName(const std::string &value);
        std::string getSoftwareVersion() const;
        void setSoftwareVersion(const std::string &value);
        std::string getModel() const;
        void setModel(const std::string &value);
        std::string getPassword() const;
        void setPassword(const std::string &value);
        std::string getUserName() const;
        void setUserName(const std::string &value);
        std::string getLandingPage() const;
        void setLandingPage(const std::string &value);
        int getPort() const;
        void setPort(int value);
        int getId() const;
        void setId(int value);
};

#endif // SMARTPLUG_H
