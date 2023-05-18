#ifndef TESTDATA_H
#define TESTDATA_H

#include <string>
#include "ITestAutomation.h"

namespace libTestAutomation {
    class LIBTESTAUTOMATION_API TestData {
    public:
        TestData(); // Default constructor
        explicit TestData(const std::string& csvFilePath); // Overloaded constructor accepting a file path

        ~TestData();

        void loadFromCSV(const std::string& csvFilePath);
        void loadFromDatabase(const std::string& connectionString);
        void loadFromAPI(const std::string& apiUrl);

    private:
        void loadData(const std::string& filePath); // Private helper function to load data
    };
} // namespace libTestAutomation

#endif //TESTDATA_H
