#include <stdio.h>



int main(void)
{
	extern char **environ;		// ??????????
	int i = 0;
	
	while (NULL != environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
	
	
	return 0;
}




