#include <stdio>

#define QUIT  ((unsigned int)0)
#define STRAT ((unsigned int)1)
#define HELP  ((unsigned int)2)

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

