#include<stdio.h>
void My_strcat(unsigned char* ptr1, unsigned char *ptr2);
int main()
{
	unsigned char str1[100] = "Madhiyan";
	unsigned char str2[100] = "Swathi";
	My_strcat(str1,str2);
	printf("\r\n%s\r\n",str1);
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
