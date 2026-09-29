#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5
#define MAX_LENGTH 100

char tasks[MAX_TASKS][MAX_LENGTH];
int taskCount = 0;

void markTaskDone(int index) {
    if (index >= 0 && index < taskCount) {
        strcat(tasks[index], " - DONE");
    } else {
        printf("Invalid task index.\n");
    }
}

int main() {
    int i;

    printf("Enter up to 5 tasks:\n");

    for (i = 0; i < MAX_TASKS; i++) {
        printf("Task %d: ", i + 1);
        fgets(tasks[i], MAX_LENGTH, stdin);

        tasks[i][strcspn(tasks[i], "\n")] = '\0';

        if (tasks[i][0] == '\0') {
            break;
        }

        taskCount++;
    }

    /* Mark the second task as done, if it exists */
    if (taskCount > 1) {
        markTaskDone(1);
    }

    printf("\nUpdated Task List:\n");
    for (i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
