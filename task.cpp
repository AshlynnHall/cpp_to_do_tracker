#include "task.h"
#include <iostream>

task::task(const std::string& name, const std::string& description, const std::string& start, const std::string& end)
    : name(name), description(description), startDate(start), endDate(end), isComplete(false) {}

void task::updateDetails(const std::string& newName, const std::string& newDescription, const std::string& newStart, const std::string& newEnd) {
    name = newName;
    description = newDescription;
    startDate = newStart;
    endDate = newEnd;
}

void task::displayInfo() const {
    std::cout << "Task Name: " << name << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Start Date: " << startDate << std::endl;
    std::cout << "End Date: " << endDate << std::endl;
    std::cout << "Status: " << (isComplete ? "Complete" : "Incomplete") << std::endl;
}

void task::markComplete() {
    isComplete = true;
}