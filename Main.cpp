#include "../libAPI/libAPI/ThermalSystemAPI/ThermalSystemAPI.h"
#include "../libTestAutomation/libTestAutomation/libAutomation.h"
#include <iostream>

using namespace libTestAutomation;

bool verifyLibAutomation() {

    // Create shared_ptr instances for TestData and DeviceManager
    std::shared_ptr<TestData> testData = std::make_shared<TestData>();
    std::shared_ptr<DeviceManager> deviceManager = std::make_shared<DeviceManager>();

    // Create a device manager and add some devices
    //libTestAutomation::DeviceManager deviceManager;
    deviceManager->addDevice("BatteryModule1", std::make_shared<libTestAutomation::BatteryModule>());
    deviceManager->addDevice("HighVoltagePowerElectronics1", std::make_shared<libTestAutomation::HighVoltagePowerElectronics>());


    // Create a test environment
      
    testData->loadFromCSV("./testdata.xls");
    // ... set up your testData and deviceManager as necessary ...
    //libTestAutomation::TestEnvironment testEnvironment(&testData, &deviceManager);
    // Create TestEnvironment instance with shared_ptr instances
    TestEnvironment testEnvironment(testData, deviceManager);


    // Create a test logger and a test reporter
    libTestAutomation::TestLogger testLogger;
    libTestAutomation::TestReporter testReporter;

    // Create a test factory and create a test suite from a definition
    libTestAutomation::TestFactory testFactory;
    testLogger.logEvent("Creating Test Suite for Test1, Test2 and Test3");
    libTestAutomation::TestSuite testSuite = testFactory.createTestSuite("Test1,Test2,Test3");

    // Create a test runner
    libTestAutomation::TestRunner testRunner(testEnvironment, testLogger, testReporter);

    // Run the test suite
    testRunner.run(testSuite);

    return false;
}




int main() {
    verifyLibAutomation();
    return 0;
}
