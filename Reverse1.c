#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int opt;
	int flag = 0;
	int access = 0;

	while((opt = getopt(argc, argv, "cs:")) != -1)
	{
		switch(opt)
		{
			case 'c':
				flag = 1;
				break;
			case 's':
				access = 1;
				break;
			default:
				printf("Access Denied");
				exit(0);
		}
	}

	if(access == 1)
	{
		printf("Access granted");
	}

	return 0;
}
