


/*
** Author Touailab ilyase 2018/2019
**
*/



#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
	char c=1;
	int p;
	argv[1]="path/name.png";
	argv[2]="path/name.png";
	argv[3]="path/name.png";
	argv[4]="path/name.png";
	argc=5;
    while(1)
    { 
    	p=fork();
    	if(p==0){
    		execlp("feh","feh","--bg-scale",argv[c],NULL);
    	}
    	else {
    		wait(NULL);
    		sleep(5);
    		c++;
    		if(c>argc-1) c=1;

    	}

    }


	return 0;
}