#ifndef TESTRUNNER_H
#define TESTRUNNER_H

#include <vector>
#include <memory>
#include "ITestAutomation.h"
#include "TestEnvironment.h"
#include "TestLogger.h"
#include "TestReporter.h"
#include "TestSuite.h"
#include "TestEnvironment.h"
#include "TestLogger.h"
#include "TestReporter.h"

namespace libTestAutomation
{
#pragma warning(disable: 4251)
    // Forward declaration of the TestCase class
    class TestCase;

    class LIBTESTAUTOMATION_API TestRunner
    {
    public:
        // Constructor
        TestRunner(TestEnvironment& testEnvironment, TestLogger& testLogger, TestReporter& testReporter);
        

        // Destructor
        ~TestRunner();

        // Method to add test cases to the runner
        void addTest(std::shared_ptr<TestCase> test);

        // Method to run all added test cases
        void runAll();
        // Method to run a specific test suite
        void run(TestSuite& testSuite);

    private:
        // Vector to store all the test cases
        std::vector<std::shared_ptr<TestCase>> tests;
        TestEnvironment& testEnvironment;
        TestLogger& testLogger;
        TestReporter& testReporter;
    };
}

#endif // TESTRUNNER_H
