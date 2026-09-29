#include <stdio.h>

#define MAX_TASKS 5
#define MAX_LENGTH 100

char tasks[MAX_TASKS][MAX_LENGTH];
int taskCount = 0;

int main() {
    int i;

    printf("Enter up to 5 tasks:\n");

    for (i = 0; i < MAX_TASKS; i++) {
        printf("Task %d: ", i + 1);
        fgets(tasks[i], MAX_LENGTH, stdin);

        /* Remove the newline character */
        int j = 0;
        while (tasks[i][j] != '\0') {
            if (tasks[i][j] == '\n') {
                tasks[i][j] = '\0';
                break;
            }
            j++;
        }

        if (tasks[i][0] == '\0') {
            break;
        }

        taskCount++;
    }

    printf("\nTask List:\n");
    for (i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
