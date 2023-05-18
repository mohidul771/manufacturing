#include <sstream>
#include "TestFactory.h"
#include "ConcreteTestCase.h"

namespace libTestAutomation {

    TestFactory::TestFactory() {
        // constructor
    }

    TestFactory::~TestFactory() {
        // destructor
    }

    std::shared_ptr<TestCase> TestFactory::createTestCase(const std::string& testName) {
        // Create a new ConcreteTestCase with the given name.
        return std::make_shared<ConcreteTestCase>(testName);
    }

    TestSuite TestFactory::createTestSuite(const std::string& definition) {
        // Assume definition is a comma-separated list of test names.
        std::istringstream ss(definition);
        std::string testName;
        TestSuite suite;
        while (std::getline(ss, testName, ',')) {
            // Create a new test case for each name and add it to the suite.
            suite.addTestCase(createTestCase(testName));
        }
        return suite;
    }

} // namespace libTestAutomation
