// Importations:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cutils.h>


// Main code:
int main(void)
{
	// Start random seed:
	srand((unsigned int) time(NULL));

	// Variables:
	unsigned char loop1 = 1u, loop2 = 1u;
	long double option1;

	// Main loop:
	while(loop1)
	{
		// Commands before the second main loop:
		clear_terminal();
		puts("================================");
		puts("========= RNG Infinity =========");
		puts("================================");
		printf("  %s[ 0 ] Exit...%s\n", RED_COLOR, BASE_TERMINAL);
		puts("  [ 1 ] Start without colors");
		puts("  [ 2 ] Start with colors");
		fputs("\tYour answer: ", stdout);
		scanf("%Lf", &option1);
		clear_terminal();

		if(option1 == 0.0L)
		{
			--loop1;
		}

		else if(option1 == 1.0L)
		{
			puts("When you start running the app, just press \"Ctrl-C\" to quit RNG Infinity!");
			petc();
			clear_terminal();

			while(loop2)
			{
				printf("%d", rand() % 2);
				fflush(stdout);
			}
		}

		else if(option1 == 2.0L)
		{
			puts("When you start running the app, just press \"Ctrl-C\" to quit RNG Infinity!");
			petc();
			clear_terminal();

			while(loop2)
			{
				printf("%s%d%s", GREEN_COLOR, rand() % 2, BASE_TERMINAL);
				fflush(stdout);
			}
		}
	}

	return 0;
}
