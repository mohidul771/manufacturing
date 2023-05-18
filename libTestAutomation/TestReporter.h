#ifndef TESTREPORTER_H
#define TESTREPORTER_H

#include <string>
#include "ITestAutomation.h"

namespace libTestAutomation {
class LIBTESTAUTOMATION_API TestReporter {
public:
    TestReporter();
    ~TestReporter();

    std::string generateHTMLReport();
    std::string generateXMLReport();
    std::string generateJSONReport();
};
} // namespace libTestAutomation

#endif //TESTREPORTER_H
