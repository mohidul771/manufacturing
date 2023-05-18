#include "TestResult.h"

namespace libTestAutomation {

    TestResult::TestResult(bool success, const std::string& message)
        : isSuccess(success), message(message) {}

    TestResult TestResult::success() {
        return TestResult(true, "Test passed successfully");
    }

    TestResult TestResult::failure(const std::string& message) {
        return TestResult(false, message);
    }

    bool TestResult::Success() const {
        return isSuccess;
    }

    std::string TestResult::getMessage() const {
        return message;
    }

} // namespace libTestAutomation
