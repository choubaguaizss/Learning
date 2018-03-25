#include "stdio.h"
#include "../include/bit_manip.h"
#include "../include/common.h"
unsigned int my_word = 0;
unsigned char position = 0;
void bit_manip_main()
{
	unsigned int option = 0;
	unsigned int exit_count=0;
	while(exit_count < MAX_TRY)
	{
		print_options_bitmanip();
		scanf("%d", &option);
		if(EXIT_PROGRAM == option)	
		{
			printf("Hope you enjoyed learning \"Bit manipulation\", Goodbye!!!\r\n");
			break;
		}
		my_word =0;
		position=0;
		switch(option)
		{
			case 1:
				printf("Enter the word in which you want to set a bit : ");
				scanf("%d",&my_word);
				printf("Enter the position which you want to set : ");
				scanf("%d",&position);
				position -=1;
				set_bit(&my_word,position);
				break;
			case 2:
				printf("Enter the word in which you want to clear a bit : ");
				scanf("%d",&my_word);
				printf("Enter the position which you want to clear : ");
				scanf("%d",&position);
				position -=1;
				clear_bit(&my_word,position);
				break;
			case 3:
				printf("Enter the word in which you want to toggle a bit : ");
				scanf("%d",&my_word);
				printf("Enter the position which you want to toggle : ");
				scanf("%d",&position);
				position -=1;
				toggle_bit(&my_word,position);
				break;
			case 4:
				printf("Enter the word in which you want to count number of bit set : ");
				scanf("%d",&my_word);
				count_bit(my_word);
				break;
			case 5:
				printf("Enter the word in which you want to cjheck if  a bit is set : ");
				scanf("%d",&my_word);
				printf("Enter the position which you want to check : ");
				scanf("%d",&position);
				position -=1;
				if(isbit_set(&my_word,position))	printf("Yup, set");
				else	printf("Nope, not set");
				break;
			case 6:
				printf("Enter the word in which you want to clear the lowest set bit : ");
				scanf("%d",&my_word);
				clear_lowest_set_bit(&my_word);
				break;
			case 7:
				printf("Enter the word in which you want to toggle a bit : ");
				scanf("%d",&my_word);
				printf("The lowest set bit position is %d",get_lowest_set_bit(&my_word));
				break;
			case 8:
				printf("Enter the number which you want to check if it is power of 2 : ");
				scanf("%d",&my_word);
				if(check_power_of_2(my_word))	printf("Yup, power of 2");
				else	printf("Nope, not a power of 2");
				break;
			case 9:
				printf("Enter the number which you want to multiply by 10 : ");
				scanf("%d",&my_word);
				printf("%d x 10 = %d",my_word,multiply10(my_word));
				break;
			default:
				printf("Wrong option!!! Try again\r\n");
				exit_count++;
				break;
		}
	}
}
void print_options_bitmanip()
{
	printf("\r\nEnter any one of the below options,\r\n");
	printf("1. Set a bit in a word\r\n");
	printf("2. Clear a bit in a word\r\n");
	printf("3. Toggle a bit in a word\r\n");
	printf("4. Count number of bits set in a word\r\n");
	printf("5. Check if a bit is set in a word\r\n");
	printf("6. Clear lowest set bit in a word\r\n");
	printf("7. Get position of the lowest set bit in a word\r\n");
	printf("8. check if a number is power of 2\r\n");
	printf("9. Multiply a number with 10 using logical operations\r\n");
	printf("Option: ");
}
void get_inputs()
{
	}
void set_bit(unsigned int *p_word, unsigned char position)
{
	printf("so you want to set %d position in the word having current value %d\r\n",position+1,*p_word);
	*p_word = *p_word | (1<<position);
	printf("After setting the %d position the resulting value is %d\r\n",position+1,*p_word);
}
void clear_bit(unsigned int *p_word, unsigned char position)
{
	*p_word = *p_word & (1<<position);
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
void toggle_bit(unsigned int *p_word, unsigned char position)
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
