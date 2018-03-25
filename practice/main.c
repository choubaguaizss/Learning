#include <stdio.h>
#include "include/common.h"
#include "include/bit_manip.h"
//#include "include/pointers.h"
#include "include/struct_union.h"
#include "include/str_manip.h"
//#include "include/linkedlist.h"
#include "include/interesting.h"
void print_options_main();

int main ()
{
	unsigned int option = 0;
	unsigned int exit_count=0;
	while(exit_count < MAX_TRY)
	{
		print_options_main();
		scanf("%d", &option);
		if(EXIT_PROGRAM == option)	
		{
			printf("Hope you enjoyed learning, Goodbye!!!\r\n");
			break;
		}
		switch(option)
		{
			case 1:
				bit_manip_main();
				exit_count = 0;
				break;
			case 2:
				//pointers_main();
				exit_count = 0;
				break;
			case 3:
				struct_union_main();
				exit_count = 0;
				break;
			case 4:
				//function_pointers_main();
				exit_count = 0;
				break;
			case 5:
				str_manip_main();
				exit_count = 0;
				break;
			case 6:
				interesting_main();
				exit_count = 0;
				break;
			default:
				printf("Wrong option!!! Try again\r\n");
				exit_count++;
				break;
		}
	}
}
void print_options_main()
{
	printf("Enter any one of the below options,\r\n");
	printf("1.Bit manipulation\r\n"); 
	printf("2.Pointers\r\n"); 
	printf("3.Structures and unions\r\n");
	printf("4.Function pointers\r\n");
	printf("5.String manipulation\r\n");
	printf("6.Interesting stuff\r\n");
	printf("0. Exit program\r\n");
	printf("option: ");
	
}
