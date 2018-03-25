/*unsigned int my_sizeof(void input);
Armstrong();
Fibbonacci();
Little_Big_endian();
Swap_nibble();
swap_array();
*/

#include "stdio.h"
#include "../include/interesting.h"
#include "../include/common.h"
void interesting_main()
{
	unsigned int option = 0;
	unsigned int exit_count=0;
	while(exit_count < MAX_TRY)
	{
		print_options_interesting();
		scanf("%d", &option);
		if(EXIT_PROGRAM == option)	
		{
			printf("Hope you enjoyed learning \" some interesting things\", Goodbye!!!\r\n");
			break;
		}
		switch(option)
		{
			case 1:
				Volatile_keyword();
				break;
			default:
				printf("Wrong option!!! Try again\r\n");
				exit_count++;
				break;
		}
	}
}
void print_options_interesting()
{
	printf("\r\nEnter any one of the below options,\r\n");
	printf("1. Volatile keyword\r\n");
	printf("0. Exit Interesting stuff\r\n");
	printf("Option: ");
}
void Volatile_keyword()
{
	printf("this is nothing	");
}