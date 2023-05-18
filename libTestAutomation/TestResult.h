#ifndef TESTRESULT_H
#define TESTRESULT_H

#include <string>

namespace libTestAutomation {

    class TestResult {
    public:
        TestResult(bool success, const std::string& message = "");

        static TestResult success();
        static TestResult failure(const std::string& message);

        bool Success() const;
        std::string getMessage() const;

    private:
        bool isSuccess;
        std::string message;
    };

} // namespace libTestAutomation

#endif // TESTRESULT_H
