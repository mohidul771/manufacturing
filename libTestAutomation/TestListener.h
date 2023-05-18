#ifndef LIBTESTAUTOMATION_TESTLISTENER_H
#define LIBTESTAUTOMATION_TESTLISTENER_H

#include "TestResult.h"
#include "ITestAutomation.h"

namespace libTestAutomation {

    class LIBTESTAUTOMATION_API TestListener {
    public:
        TestListener();
        virtual ~TestListener();

        virtual void onTestStart(const std::string& testName) = 0;
        virtual void onTestEnd(const std::string& testName, const TestResult& result) = 0;
    };

} // namespace libTestAutomation

#endif // LIBTESTAUTOMATION_TESTLISTENER_H
