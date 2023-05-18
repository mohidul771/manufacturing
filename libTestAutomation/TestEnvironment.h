#ifndef TESTENVIRONMENT_H
#define TESTENVIRONMENT_H

#include <memory>
#include "TestData.h"
#include "DeviceManager.h"
#include "ITestAutomation.h"

namespace libTestAutomation {
#pragma warning(disable: 4251)
    class LIBTESTAUTOMATION_API TestEnvironment {
    public:
        TestEnvironment(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager);
        virtual ~TestEnvironment();

        std::shared_ptr<TestData> getTestData();
        virtual std::shared_ptr<DeviceManager> getDeviceManager();

    private:
        std::shared_ptr<TestData> testData;
        std::shared_ptr<DeviceManager> deviceManager;
    };

} // namespace libTestAutomation

#endif //TESTENVIRONMENT_H
