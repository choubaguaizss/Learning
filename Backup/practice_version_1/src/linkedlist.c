#include <stdio.h>
struct linked_list{
	unsigned int value;
	unsigned char* p_next;
};
int main()
{
	struct linked_list ll;
	printf("size of the strut: %d\r\n",sizeof(ll));
	printf("Uint%d\r\n",sizeof(ll.value));
	printf("uchar%d\r\n",sizeof(ll.p_next));
	//here goes the code.
	//and this is also the code.
}

