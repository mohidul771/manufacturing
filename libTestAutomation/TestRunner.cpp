#include "TestRunner.h"
#include "TestCase.h"
#include <iostream>

using namespace libTestAutomation;

TestRunner::TestRunner(TestEnvironment& testEnvironment, TestLogger& testLogger, TestReporter& testReporter)
    : testEnvironment(testEnvironment), testLogger(testLogger), testReporter(testReporter)
{
    // Initialize or use the arguments as necessary
}

TestRunner::~TestRunner()
{
    // Destructor body
}

void TestRunner::addTest(std::shared_ptr<TestCase> test)
{
    tests.push_back(test);
}

void TestRunner::runAll()
{
    for (auto& test : tests)
    {
        test->setUp();
        test->execute();
        test->tearDown();
    }
}
void TestRunner::run(TestSuite& testSuite)
{
     // Log the start of the test suite
    testLogger.logEvent("Starting test suite...");

    std::shared_ptr<TestData> testData = testEnvironment.getTestData();
    std::shared_ptr<DeviceManager> deviceManager = testEnvironment.getDeviceManager();


    // Run the test cases in the test suite
    for (auto& testCase : testSuite.getTestCases())
    {
        // Log the start of a test case
        std::string ss;
        ss = "Starting test case: " + std::string(testCase->getTestName());
        testLogger.logEvent(ss);

        // Set up the test case

        testCase->setUp(testData, deviceManager);


        // Execute the test case
        testCase->execute(testData, deviceManager);

        // Tear down the test case
        testCase->tearDown(testData, deviceManager);

        // Log the end of the test case
        testLogger.logEvent("Finished test case: " + (std::string(testCase->getTestName())));
    }
    // Log the end of the test suite
    testLogger.logEvent("Finished test suite...");
    // Generate reports
    std::string htmlReport = testReporter.generateHTMLReport();
    std::string xmlReport = testReporter.generateXMLReport();
    std::string jsonReport = testReporter.generateJSONReport();

    testLogger.logEvent("Test reports generated. Store the results");
}
