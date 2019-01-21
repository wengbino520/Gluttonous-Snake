#include <stdio.h>

#define QUIT  ((unsigned int)0)
#define START ((unsigned int)1)
#define HELP  ((unsigned int)2)

unsigned int Welcome();

int main()
{
	printf("game loading...\n");
	unsigned int choice = Welcome();
	switch(choice)
	{
		case QUIT:
		{
			/* quit the game */
			break;
		}
		case START:
		{
			/* start the game */
			break;
		}
		case HELP:
		{
			/* show info and show how to play */
			break;
		}
		default:
		{
			/* show help info */
		}
	}
	printf("good work anyway, may you have a good day\n");
	return 0;
}

unsigned int Welcome()
{
	return 0;
}

