#ifndef TESTFACTORY_H
#define TESTFACTORY_H

#include <string>
#include <memory>
#include "TestCase.h"
#include "TestSuite.h"
#include "ITestAutomation.h"

namespace libTestAutomation {

    class LIBTESTAUTOMATION_API TestFactory {
    public:
        TestFactory();
        virtual ~TestFactory();

        std::shared_ptr<TestCase> createTestCase(const std::string& testName);
        TestSuite createTestSuite(const std::string& definition);
    };

} // namespace libTestAutomation

#endif // TESTFACTORY_H
