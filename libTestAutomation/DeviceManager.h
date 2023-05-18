// DeviceManager.h
#ifndef DEVICEMANAGER_H
#define DEVICEMANAGER_H

#include <string>
#include <map>
#include <memory>  // Include for smart pointers
#include "IDevice.h"
#include "ITestAutomation.h"

namespace libTestAutomation {
#pragma warning(disable: 4251)
    class LIBTESTAUTOMATION_API DeviceManager {
    public:
        DeviceManager();
        ~DeviceManager();

        void addDevice(const std::string& deviceID, std::shared_ptr<IDevice> device);
        void connectToDevice(const std::string& deviceID);
        void resetDevice(const std::string& deviceID);
        void sendCommandToDevice(const std::string& deviceID, const std::string& command);

    private:
        std::map<std::string, std::shared_ptr<IDevice>> devices;  // Updated to use shared_ptr
    };

}  // namespace libTestAutomation

#endif //DEVICEMANAGER_H
