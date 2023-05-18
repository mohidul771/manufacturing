#include "TestEnvironmentLinux.h"

namespace libTestAutomation {

    TestEnvironmentLinux::TestEnvironmentLinux(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager)
        : TestEnvironment(testData, deviceManager) {
    }

    TestEnvironmentLinux::~TestEnvironmentLinux() {
    }

    std::shared_ptr<DeviceManager> TestEnvironmentLinux::getDeviceManager() {
        // Call the base class implementation.
        return TestEnvironment::getDeviceManager();
    }

    // Additional methods specific to Linux environment...
}
