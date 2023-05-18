#include "Assert.h"
#include <stdexcept>

Assert::Assert() {
    // constructor
}

Assert::~Assert() {
    // destructor
}

void Assert::assertTrue(bool condition, const std::string& message) {
    if (!condition) {
        throw std::runtime_error(message);
    }
}

void Assert::assertFalse(bool condition, const std::string& message) {
    if (condition) {
        throw std::runtime_error(message);
    }
}

void Assert::assertEquals(int expected, int actual, const std::string& message) {
    if (expected != actual) {
        throw std::runtime_error(message);
    }
}

void Assert::assertNotEquals(int expected, int actual, const std::string& message) {
    if (expected == actual) {
        throw std::runtime_error(message);
    }
}
