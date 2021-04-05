#include "testshell.h"

int main (void)
{
	int id;
	int i = 0;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	
	for(i = 0; i < 5; i++)
	{
		id = fork();
		
		if (id == -1)
		{
			perror("error: ");
			exit (1);
		}

		else if (id > 0)
		{

			wait(NULL);

		}

		else if (id == 0)
		{
			execve(argv[0], argv, NULL);
		}
	}
	
	return (0);	
}
