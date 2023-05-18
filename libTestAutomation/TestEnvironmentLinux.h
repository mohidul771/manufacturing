#ifndef TestEnvironmentLinux_H
#define TestEnvironmentLinux_H

#include <memory>
#include "TestData.h"
#include "DeviceManager.h"
#include "ITestAutomation.h"

namespace libTestAutomation {
#pragma warning(disable: 4251)
    class LIBTESTAUTOMATION_API TestEnvironmentLinux: public  TestEnvironment{
    public:
        TestEnvironmentLinux() {
            TestEnvironment();
        }
        ~TestEnvironmentLinux() {
            ~TestEnvironment();
        }

        
        std::shared_ptr<DeviceManager> getDeviceManager() override {
            //the implementation of the override method will go here
        }

    private:
        std::shared_ptr<TestData> testData;
        std::shared_ptr<DeviceManager> deviceManager;
    };

} // namespace libTestAutomation

#endif //TestEnvironmentLinux_H
#pragma once
