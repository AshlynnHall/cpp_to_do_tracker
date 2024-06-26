#pragma once
#include <string>

class task {
public:
    task(const std::string& name, const std::string& description, const std::string& start, const std::string& end);

    void updateDetails(const std::string& newName, const std::string& newDescription, const std::string& newStart, const std::string& newEnd);
    void displayInfo() const;
    void markComplete();

private:
    std::string name;
    std::string description;
    std::string startDate;
    std::string endDate;
    bool isComplete;
};