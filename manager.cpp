#include "manager.h"
#include <iostream>

void Manager::addTask(const task& task) {
    tasks.push_back(task);
}

void Manager::updateTaskDetails(int index, const std::string& newName, const std::string& newDescription, const std::string& newStart, const std::string& newEnd) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].updateDetails(newName, newDescription, newStart, newEnd);
    }
    else {
        std::cerr << "Invalid task index!" << std::endl;
    }
}

void Manager::markTaskComplete(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].markComplete();
    }
    else {
        std::cerr << "Invalid task index!" << std::endl;
    }
}

void Manager::displayAllTasks() const {
    for (const auto& task : tasks) {
        task.displayInfo();
        std::cout << "-----------------" << std::endl;
    }
}