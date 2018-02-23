#include "../include/bit_manip.h"
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
