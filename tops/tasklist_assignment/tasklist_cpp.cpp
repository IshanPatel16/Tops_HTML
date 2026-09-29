#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    Task(const string& taskTitle) : title(taskTitle), isDone(false) {}

    void markDone() {
        isDone = true;
    }

    void display() const {
        cout << title << " - " << (isDone ? "DONE" : "PENDING") << endl;
    }
};

class TaskList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& title) {
        tasks.emplace_back(title);
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < static_cast<int>(tasks.size())) {
            tasks[index].markDone();
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void showTasks() const {
        cout << "\nTask List:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main() {
    TaskList taskList;

    taskList.addTask("Complete C++ assignment");
    taskList.addTask("Study OOP concepts");
    taskList.addTask("Practice Git");

    cout << "Before marking a task as done:";
    taskList.showTasks();

    // Mark the second task as done (index 1).
    taskList.markTaskDone(1);

    cout << "\nAfter marking task 2 as done:";
    taskList.showTasks();

    return 0;
}
