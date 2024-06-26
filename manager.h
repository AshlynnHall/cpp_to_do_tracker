#pragma once
#include "task.h"
#include <vector>

class Manager {
public:
    void addTask(const task& Task);
    void updateTaskDetails(int index, const std::string& newName, const std::string& newDescription, const std::string& newStart, const std::string& newEnd);
    void markTaskComplete(int index);
    void displayAllTasks() const;

private:
    std::vector<task> tasks;
};