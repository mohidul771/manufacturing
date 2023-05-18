#include "TestSuite.h"
#include <iostream>

using namespace libTestAutomation;

TestSuite::TestSuite()
{
    // Constructor body
}

void TestSuite::addTestCase(std::shared_ptr<TestCase> testCase)
{

    std::cout << "Added test case: " << testCase->getTestName() << " to the test suite\n";
    testCases.push_back(testCase);
}

void TestSuite::runTests()
{
    std::cout << "Running test cases....\n";
    for (auto& testCase : testCases)
    {
        std::cout << "Running test case: " << testCase->getTestName() << " \n";
        testCase->setUp();
        testCase->execute();
        testCase->tearDown();
    }
}

const std::vector<std::shared_ptr<TestCase>>& TestSuite::getTestCases() const
{
    return testCases;
}

