#include "stdio.h"
#include "../include/bit_manip.h"
#define MAX_TRY 5
#define EXIT_PROGRAM 9
void bit_manip_main()
{
	unsigned int option = 0;
	unsigned int exit_count=0;
	unsigned int my_word = 0;
	unsigned char position = 0;
	while(exit_count < MAX_TRY)
	{
		//print_options_main();
		scanf("%d", &option);
		if(EXIT_PROGRAM == option)	
		{
			printf("Hope you enjoyed learning \"Bit manipulation\", Goodbye!!!\r\n");
			break;
		}
		switch(option)
		{
			case 1:
				printf("Enter the word in which you want to set a bit\r\n");
				scanf("%d",&my_word);
				printf("Enter the position which you want to set\r\n");
				scanf("%d",&position);
				set_bit(&my_word,position);
				printf("%d",my_word);
				break;
			case 2:
				printf("case 2\r\n");
				break;
			default:
				printf("Wrong option!!! Try again\r\n");
				exit_count++;
				break;
		}
	}
}
void set_bit(unsigned int *p_word, unsigned char position)
{
	*p_word = *p_word & (1<<position);
}
void clear_bit(unsigned int *p_word, unsigned char position)
{
	*p_word = *p_word | (1<<position);
}
unsigned char count_bit(unsigned int word)
{
unsigned char count;
	while(word)
	{
		word &= word-1;
		count++;
	}
return count;
}
int toggle_bit(unsigned int *p_word, unsigned char position)
{
	*p_word = *p_word ^ (1<<position);
}
unsigned char isbit_set(unsigned int *p_word, unsigned char position)
{
	if( *p_word && (1<<position)) return TRUE;
	else FALSE;
}
void clear_lowest_set_bit(unsigned int *p_word)
{
	*p_word = *p_word |(*p_word - 1);
}
unsigned char get_lowest_set_bit(unsigned int *p_word)
{
	return (*p_word &(*p_word - 1));
}
unsigned char check_power_of_2(unsigned int word)
{
	if(word & word - 1 )	return TRUE;
	else return FALSE;
}
unsigned int multiply10(unsigned int num)
{
	return ((num<<1)+(num<<3));//(num*10) ~ (num *(2+8)) ~ (num*2 + num*8) ~ (num<<1+num<<4)
}
