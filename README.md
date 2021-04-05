# OperatingSystem-EX1-LibrariesAndProcesses
OS - Libraries and Processes




_*First task*_ – compiler, shared libraries, and procesess.
Due date – 05/4/2021, 11:59pm

*part A* – compilers and libraries

Intro: when we write a “normal” C aplication, we have all the sources of the code.
So we can compile and link them together, in order to get one executable file.
But sometimes, the requested output of our work, is a library, that other developers can
include in ther own project.
In this task you are requested to produce a simple C excutable, and a shared library that can
be used by it. Also you are asked to provide a Make file, that will help to utilize each of the
sub tasks.

*~Subtask 1~*

1.1 write a “hello ariel” program,in a sepparate “hello_ariel” file (C and H).

1.2 write a short main “main1_1” that will include “hello_ariel”, and use it.

1.3 write a make file that will compile the above


*~Subtask 2~*

2.1 compile “hello_ariel” as a shared object (.so) library

2.2 write a short main “main1_2” that will use the above library

2.3 compile the above to one executable, and update the make file


*~Subtask 3~*

3.1 write a short main “main1_3” , that will load our lib from subtask 2 in runtime

3.2 comiple the main, and alter the make file


*~Subtask 4~*

4.1 practice with tools (what function exist, what libs are used)

4.2 alter the make file to have default build, and clean options


*_part B – Processes_*
You are requested to implement a a launching app, that will start a few more processes.


*~Subtask 1~*

Write main2_1 file, that starts two processes that will be nested childs of the main
app.
Like this: App -> process1 -> process 2.

*~Subtask 2~*

Write main2_2 file, that starts three processes with the same shared memory (like a
Threads).
Like this: 3*App

*~Subtask 3~*
Write main2_3 file, that starts a deamon process. The deamon should update the
system log file (like shown at Tirgul 3)

*~Subtask 4~*
Modify your app, to have a make file, and one main2_4 executable
Show the relevant processes tree that will reflect the tasks result.

_Submision notes:
Please make two,and only two folders: task_a and task_b.
Each of them will include Make file with default build, and clear option.
All the executable should have the same name as a main c file.
Compress the work to ZIP (not RAR) file, and upload to Moodle_
