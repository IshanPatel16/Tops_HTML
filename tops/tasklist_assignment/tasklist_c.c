#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5
#define MAX_LENGTH 100

char tasks[MAX_TASKS][MAX_LENGTH];
int taskCount = 0;

/* Marks the selected task as DONE. */
void markTaskDone(int index) {
    if (index >= 0 && index < taskCount) {
        strcpy(tasks[index], "DONE");
    } else {
        printf("Invalid task index.\n");
    }
}

void showTasks(void) {
    printf("\nTask List:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

int main(void) {
    /* Add up to 5 tasks. */
    strcpy(tasks[taskCount++], "Complete C assignment");
    strcpy(tasks[taskCount++], "Study OOP concepts");
    strcpy(tasks[taskCount++], "Practice Git");
    strcpy(tasks[taskCount++], "Read documentation");
    strcpy(tasks[taskCount++], "Submit project");

    printf("Original");
    showTasks();

    /* Mark the second task as done (index 1). */
    markTaskDone(1);

    printf("\nAfter marking task 2 as DONE");
    showTasks();

    return 0;
}
