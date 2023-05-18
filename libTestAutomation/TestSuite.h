#ifndef TESTSUITE_H
#define TESTSUITE_H

#include <vector>
#include <memory>
#include "TestCase.h"
#include "ITestAutomation.h"

namespace libTestAutomation
{
    class LIBTESTAUTOMATION_API TestSuite
    {
    public:
        // Constructor
        TestSuite();

        // Methods
        void addTestCase(std::shared_ptr<TestCase> testCase);
        void runTests();
        const std::vector<std::shared_ptr<TestCase>>& getTestCases() const;

    private:
        std::vector<std::shared_ptr<TestCase>> testCases;
    };
}

#endif // TESTSUITE_H
