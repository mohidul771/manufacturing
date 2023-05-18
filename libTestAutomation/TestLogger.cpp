#include "TestLogger.h"
#include <iostream>


namespace libTestAutomation {
TestLogger::TestLogger() {
    std::cout << "Instantiate the TestLogger Object\n";
}

TestLogger::~TestLogger() {
    // destructor
}

void TestLogger::logEvent(const std::string& event) {
    std::cout << "Log an event: " << event << " \n";
}
} // namespace libTestAutomation
