#ifndef TESTENVIRONMENTLINUX_H
#define TESTENVIRONMENTLINUX_H

#include "TestEnvironment.h"

namespace libTestAutomation {
#pragma warning(disable: 4251)
    class LIBTESTAUTOMATION_API TestEnvironmentLinux : public TestEnvironment {
    public:
        TestEnvironmentLinux(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager);
        ~TestEnvironmentLinux();

        std::shared_ptr<DeviceManager> getDeviceManager() override;

        // add specific methods for Linux environment here
    };

} // namespace libTestAutomation

#endif //TESTENVIRONMENTLINUX_H
