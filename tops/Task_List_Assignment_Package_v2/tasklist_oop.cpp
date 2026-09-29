#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    Task(string taskTitle) {
        title = taskTitle;
        isDone = false;
    }

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
    void addTask(string title) {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < (int)tasks.size()) {
            tasks[index].markDone();
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void showTasks() const {
        cout << "\nTask List:" << endl;

        for (int i = 0; i < (int)tasks.size(); i++) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main() {
    TaskList taskList;

    taskList.addTask("Complete C assignment");
    taskList.addTask("Practice programming");
    taskList.addTask("Prepare presentation");

    taskList.markTaskDone(1);

    taskList.showTasks();

    return 0;
}
