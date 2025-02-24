#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <malloc.h>

char *gmsg = "Global Message";

const int buffer_size = 100;

int main(int argc, char *argv[], char *envp[])
{
	//new threshold using mallopt
	int new_threshold = 200*1024;
	if(mallopt(M_MMAP_THRESHOLD, new_threshold)){
		printf("New mmap threshold set toL %d bytes\n", new_threshold);
	} else{
		printf("Failed to set new threshold");
	}

        char *lmsg = "Local Message";
        char *buf[buffer_size];
        int i;
        
        printf("Memory report\n");
        printf("argv:      %lx\n", (unsigned long) argv);
        printf("argv[0]:   %lx\n", (unsigned long) argv[0]);
        printf("envp:      %lx\n", (unsigned long) envp);
        printf("envp[0]:   %lx\n", (unsigned long) envp[0]);

        printf("lmsg:      %lx\n", (unsigned long) lmsg);
        printf("&lmsg:     %lx\n", (unsigned long) &lmsg);
        printf("gmsg:      %lx\n", (unsigned long) gmsg);
        printf("&gmsg:     %lx\n", (unsigned long) &gmsg);

        printf("main:      %lx\n", (unsigned long) &main);

        printf("sbrk(0):   %lx\n", (unsigned long) sbrk(0));
        printf("&buf:      %lx\n", (unsigned long) &buf);

        for (i = 0; i<buffer_size; i++) {
                buf[i] = (char *) malloc(199*1024);//i tested with both 199 and 200 and it uses brk for 199 and mmap for 200
        }
        
        printf("buf[0]:    %lx\n", (unsigned long) buf[0]);
        printf("sbrk(0):   %lx\n", (unsigned long) sbrk(0));
        
        return 0;
}
