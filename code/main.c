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
		}
		case START:
		{
			/* start the game */
		}
		case HELP:
		{
			/* show info and show how to play */
		}
	}

}

