#ifndef TESTLOGGER_H
#define TESTLOGGER_H

#include <string>
#include "ITestAutomation.h"

namespace libTestAutomation {
class LIBTESTAUTOMATION_API TestLogger {
public:
    TestLogger();
    ~TestLogger();

    void logEvent(const std::string& event);
};
} // namespace libTestAutomation

#endif //TESTLOGGER_H
