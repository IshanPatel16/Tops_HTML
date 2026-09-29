TASKLIST ASSIGNMENT

Files:
1. tasklist_c.c
   - Global array stores up to 5 tasks.
   - Uses a for loop to display tasks.
   - Includes markTaskDone(int index).

2. tasklist_cpp.cpp
   - Contains Task and TaskList classes.
   - Supports addTask(title), markTaskDone(index), and showTasks().
   - Demonstrates 3 tasks and marks one as done.

3. comparison.html
   - Gives 3 problems in the procedural C version and explains how OOP
     solves them.

Compile C:
    gcc tasklist_c.c -o tasklist_c
    ./tasklist_c

Compile C++:
    g++ tasklist_cpp.cpp -o tasklist_cpp
    ./tasklist_cpp
