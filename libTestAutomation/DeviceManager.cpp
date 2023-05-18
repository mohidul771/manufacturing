// DeviceManager.cpp
#include <iostream>
#include "DeviceManager.h"

namespace libTestAutomation {

    DeviceManager::DeviceManager() {
        std::cout << "Instantiate the DeviceManager Object\n";
    }

    DeviceManager::~DeviceManager() {
        // No need to use 'delete' with smart pointers
    }

    void DeviceManager::addDevice(const std::string& deviceID, std::shared_ptr<IDevice> device) {
        devices[deviceID] = device;

        std::cout << "Add a device named: " << deviceID << " \n";
    }

    void DeviceManager::connectToDevice(const std::string& deviceID) {
        devices[deviceID]->connect();
    }

    void DeviceManager::resetDevice(const std::string& deviceID) {
        devices[deviceID]->reset();
    }

    void DeviceManager::sendCommandToDevice(const std::string& deviceID, const std::string& command) {
        devices[deviceID]->sendCommand(command);
    }

}  // namespace libTestAutomation  
