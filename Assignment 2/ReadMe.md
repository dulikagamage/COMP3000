# COMP 3000 Assignment 2
## Dulika Gamage 101263208

### Files included:
- README.txt
- dulikagamage_a2.txt
	- answers to all written questions
- 3000userlogin_q1.c & 3000userlogin_q1.diff
	- code for part 1 question 1 and the diff file from the base code
- 3000userlogin_q2.c & 3000userlogin_q2.diff
        - code for part 1 question 2 and the diff file from the base code
- 3000shell_q1.c & 3000shell_q2.diff
	- code for part 2 question 1 and the diff file from the base code
- 30000shell_q2.c & 3000shell_q2.diff
	- code for part 2 question 2 and the diff file from the base code

### Compilation/running instructions:
Note: some may need root permissions, you can set up using: <br />
sudo chown root:root <executable> <br />
sudo chmod u+s <executable> <br />

compile 3000userlogin_q1.c:<br />
	gcc -o 3000userlogin_q1 3000userlogin_q1.c - lpam -lpam_misc
run 3000userlogin_q1.c:<br />
	./3000userlogin_q1 < username >

compile 3000userlogin_q2.c:<br />
        gcc -o 3000userlogin_q2 3000userlogin_q2.c - lpam -lpam_misc
run 3000userlogin_q2.c:<br />
        ./3000userlogin_q2 <username>

compile 3000shell_q1.c:<br />
        gcc -o 3000shell_q1 3000shell_q1.c
run 3000shell_q1.c:<br />
        ./3000shell_q1

compile 3000shell_q2.c:<br />
        gcc -o 3000shell_q2 3000shell_q2.c                  
run 3000shell_q2.c:<br />
        ./3000shell_q2
