// IDevice.h
#ifndef IDEVICE_H
#define IDEVICE_H

#include <string>
#include "ITestAutomation.h"

class LIBTESTAUTOMATION_API IDevice {
public:
    virtual ~IDevice() {}

    virtual void connect() = 0;
    virtual void reset() = 0;
    virtual void sendCommand(const std::string& command) = 0;
};

#endif // IDEVICE_H
