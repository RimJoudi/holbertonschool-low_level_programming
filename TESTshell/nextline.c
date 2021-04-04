#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *main - main test
 *@ac: integer
 *@av: char
 *Return: Always 0.
 */
void *Readl(void);
int main(void)
{
	int i = 0;
	while (i < 1)
	{
		printf("$ ");
		Readl();
	}
	return (0);
}






void *Readl(void)
{

	char *buff = NULL;
	size_t size = 0;
	ssize_t read;
		
	read = (getline(&buff, &size, stdin));
	if (read == -1)
	{
		free(buff);
		exit(0);
	}
	
	return(buff);
}
