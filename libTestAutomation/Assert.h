#ifndef ASSERT_H
#define ASSERT_H

#include <string>
#include "ITestAutomation.h"

class LIBTESTAUTOMATION_API Assert {
public:
    Assert();
    ~Assert();

    void assertTrue(bool condition, const std::string& message);
    void assertFalse(bool condition, const std::string& message);
    void assertEquals(int expected, int actual, const std::string& message);
    void assertNotEquals(int expected, int actual, const std::string& message);
};

#endif //ASSERT_H
