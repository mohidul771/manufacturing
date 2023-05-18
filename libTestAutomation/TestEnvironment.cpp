#include "TestEnvironment.h"
#include <iostream>

namespace libTestAutomation {

    TestEnvironment::TestEnvironment(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager)
        : testData(testData), deviceManager(deviceManager) {
        std::cout << "Setup Test Environment\n";
    }

    TestEnvironment::~TestEnvironment() {
        // destructor
    }

    std::shared_ptr<TestData> TestEnvironment::getTestData() {
        return testData;
    }

    std::shared_ptr<DeviceManager> TestEnvironment::getDeviceManager() {
        return deviceManager;
    }
} // namespace libTestAutomation
