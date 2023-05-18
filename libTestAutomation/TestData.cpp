#include "TestData.h"

using namespace libTestAutomation;

TestData::TestData() {
    // Default constructor body
}

TestData::TestData(const std::string& csvFilePath) {
    loadData(csvFilePath); // Load data right away
}

TestData::~TestData() {
    // Destructor body
}

void TestData::loadFromCSV(const std::string& csvFilePath) {
    // Your existing implementation
}

void TestData::loadFromDatabase(const std::string& connectionString) {
    // Your existing implementation
}

void TestData::loadFromAPI(const std::string& apiUrl) {
    // Your existing implementation
}

void TestData::loadData(const std::string& filePath) {
    // Logic to load data goes here
}
