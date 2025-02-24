Assignment 1 - COMP 3000
author: Dulika Gamage - 101263208

Files Included:
- README.txt
- dulikagamage_a1.txt
	- contains all answers to non-coding questions
- 3000textui_q4.c
	- p1 q4 answer
- 3000textui_q5.c
	- p1 q5 answer
- 3000memview_q2.c
	- p2 q2 answer
- 3000textui_q4.diff
	- diff file for p1 q4
- 3000textui_q5.diff
	- diff file for p1 q5
- 3000memview_q2.diff
	- diff file for p1 q2 


Compilation/running instructions:
to compile 3000textui_q4.c:
gcc -z lazy -o 3000textui_q4 3000textui_q4.c -l3000ping -lcurses -L.

to run 3000textui_q4.c:
./3000textui_q4
Or IP=9.9.9.9 ./3000textui

to compile 3000textui_q5.c:
gcc -z lazy -o 3000textui_q5 3000textui_q5.c -l3000ping -lcurses -L.

to run 3000textui_q4.c:
./3000textui_q5
Or IP=9.9.9.9 ./3000textui

to compile 3000memview_q2.c:
gcc -o 3000memview_q2 3000memview_q2.c
./3000memview_q2
Note: currently the KiB is set to <200 you can also test with >200 to confirm it is the new threshold.


