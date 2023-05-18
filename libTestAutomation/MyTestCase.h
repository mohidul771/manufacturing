// MyTestCase.h
#ifndef MYTESTCASE_H
#define MYTESTCASE_H

#include "TestCase.h"

namespace libTestAutomation
{
    class MyTestCase : public TestCase
    {
    public:
        // Constructor
        MyTestCase(const std::string& testName);

        // Destructor
        virtual ~MyTestCase();

        // Set up the test
        void setUp() override;

        // Execute the test
        void execute() override;

        // Clean up after the test
        void tearDown() override;
    };
}

#endif // MYTESTCASE_H
