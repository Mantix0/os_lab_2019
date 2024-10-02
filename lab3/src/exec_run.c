#include <stdio.h>

int main()
{
	int pid=fork();
	if (pid==0)
	{
		execlp("/workspaces/os_lab_2019/lab3/src/sequential_min_max","10","10","100");
		// printf("Error");
		return 1;
	}
	
	wait(NULL);
	return 0;
}