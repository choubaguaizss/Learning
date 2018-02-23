#include <stdio.h>
#include "include/bit_manip.h"
int main ()
{
	unsigned int status = 6;
	printf("What would you like to revise? Enter the option below:\r\n");
	printf("1.Bit manipulation\r\n2.Pointers\r\n3.Structures and unions\r\n4.Function pointers\r\n5.Others");
	scanf("%d", &status);
	//printf("Number*10 is: %d\r\n", multiply10(status));
	//printf("no of bit in the number is %d\r\n",count_bit((unsigned char)status));
}
