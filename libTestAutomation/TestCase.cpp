// TestCase.cpp
#include "TestCase.h"

namespace libTestAutomation {

    TestCase::TestCase(const std::string& testName) : testName(testName) {
    }

    TestCase::~TestCase() {
    }

    void TestCase::setUp() {
        // Override in derived class
    }
    void TestCase::setUp(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager) {
        // use testData and deviceManager as needed for setup
    }



    void TestCase::tearDown() {
        // Override in derived class
    }
    void TestCase::tearDown(std::shared_ptr<TestData> testData, std::shared_ptr<DeviceManager> deviceManager) {
        // use testData and deviceManager as needed for setup
    }

    const char* TestCase::getTestName() const {
        return testName.c_str();
    }


} // namespace libTestAutomation
