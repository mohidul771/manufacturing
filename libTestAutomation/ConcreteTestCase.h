#ifndef CONCRETETESTCASE_H
#define CONCRETETESTCASE_H

#include "TestCase.h"
#include "TestResult.h"

namespace libTestAutomation {

    class ConcreteTestCase : public TestCase {
    public:
        ConcreteTestCase(const std::string& testName);
        ~ConcreteTestCase() override;

        void setUp() override;
        void setUp(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager) override;

        void tearDown() override;
        void tearDown(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager) override;

        TestResult execute() override;
        TestResult execute(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager) override;
    };

} // namespace libTestAutomation

#endif // CONCRETETESTCASE_H
