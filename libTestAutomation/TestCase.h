#ifndef LIBTESTAUTOMATION_TESTCASE_H
#define LIBTESTAUTOMATION_TESTCASE_H

#include "TestResult.h"
#include <string>
#include "ITestAutomation.h"
#include "TestData.h"
#include "DeviceManager.h"

namespace libTestAutomation {
#ifdef _WIN32
#pragma warning(disable: 4251)
#endif

    class LIBTESTAUTOMATION_API TestCase {
    public:
        TestCase(const std::string& testName);
        virtual ~TestCase();

        virtual void setUp();
        virtual void setUp(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager);

        virtual void tearDown();
        virtual void tearDown(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager);

        virtual TestResult execute() = 0;  
        virtual TestResult execute(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager) = 0;


        const char* getTestName() const;  // Return type changed to const char*

    private:
        std::string testName;
    };

} // namespace libTestAutomation

#endif // LIBTESTAUTOMATION_TESTCASE_H
