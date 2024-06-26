#include <iostream>
#include "manager.h"
#include <limits>

void displayMenu() {
    std::cout << std::endl;
    std::cout << "To-do List Menu:" << std::endl;
    std::cout << "1. Add a new task" << std::endl;
    std::cout << "2. Update task details" << std::endl;
    std::cout << "3. Mark task as complete" << std::endl;
    std::cout << "4. Display all tasks" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Choose an option: ";
}

int main() {
    Manager manager;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
        case 1: {
            std::string name, description, startDate, endDate;
            std::cout << "Enter task name: ";
            std::getline(std::cin, name);
            std::cout << "Enter description: ";
            std::getline(std::cin, description);
            std::cout << "Enter Start Date (MM-DD-YYYY): ";
            std::getline(std::cin, startDate);
            std::cout << "Enter deadline (MM-DD-YYYY): ";
            std::getline(std::cin, endDate);

            task newTask(name, description, startDate, endDate);
            manager.addTask(newTask);
            break;
        }
        case 2: {
            int index;
            std::string newName, newDescription, newStart, newEnd;
            std::cout << "Enter task index to update: ";
            std::cin >> index;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Enter new task name: ";
            std::getline(std::cin, newName);
            std::cout << "Enter new description: ";
            std::getline(std::cin, newDescription);
            std::cout << "Enter new start date (MM-DD-YYYY): ";
            std::getline(std::cin, newStart);
            std::cout << "Enter new end date (MM-DD-YYYY): ";
            std::getline(std::cin, newEnd);

            manager.updateTaskDetails(index, newName, newDescription, newStart, newEnd);
            break;
        }
        case 3: {
            int index;
            std::cout << "Enter task index to mark as complete: ";
            std::cin >> index;
            manager.markTaskComplete(index);
            break;
        }
        case 4: {
            manager.displayAllTasks();
            break;
        }
        case 5: {
            std::cout << "Exiting..." << std::endl;
            break;
        }
        default: {
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
        }
        }
    } while (choice != 5);

    return 0;
}