#include<stdio.h>
#include "../include/common.h"
#include "../include/str_manip.h"
void str_manip_main()
{
	unsigned char str1[100] = "array1";
	unsigned char str2[100] = "array2";
	unsigned int option = 0;
	unsigned int exit_count=0;
	while(exit_count < MAX_TRY)
	{
		print_options_str_manip();
		scanf("%d", &option);
		if(EXIT_PROGRAM == option)	
		{
			printf("Hope you enjoyed learning \"string manipulation\", Goodbye!!!\r\n");
			break;
		}
		switch(option)
		{
			case 1:
				My_strcat(str1,str2);
				printf("\r\nYour concatinated string is \"%s\"\r\n",str1);
				break;
			default:
				printf("Wrong option!!!!\r\nWhat concept would you like to learn? Try again!!!");
				break;
		}
	}
}
int print_options_str_manip()
{
	printf("\r\nEnter any one of the below options,\r\n");
	printf("1. String concatination\r\n");
	printf("0. Exit string manipulation\r\n");
	printf("Option: ");
}
void My_strcat(unsigned char* ptr1, unsigned char *ptr2)
{
	unsigned int i=0;
	unsigned int j=0;

	while(ptr1[i] != '\0')
	{
		i++;
		//printf("inside- %d",i);
	}
	while (ptr2[j] != '\0')
	{
		//printf("inside - %d",j);
		ptr1[i] = ptr2[j];
		i++;
		j++;
	}
}
