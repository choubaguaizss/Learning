/*************************************************************************************
https://www.geeksforgeeks.org/struct-hack/
https://www.geeksforgeeks.org/are-array-members-deeply-copied/
https://www.geeksforgeeks.org/structures-c/
https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
https://www.geeksforgeeks.org/bit-fields-c/
http://www.catb.org/esr/structure-packing/

Author: Madhiyan B
Date: 23 feb 2018
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union e{
	unsigned int ui;
	unsigned char a[4];
}f;
struct employee{
	int emp_id;
	int name_len;
	char name[0];// By defining the array size as zero we can allocate memory as needed while defining the struct
};
void struct_hack()
{
	struct employee *e = malloc(sizeof(*e)+(sizeof(char)*128));	// When declaring the size of name is declared as 0.
       									// But we can still allocate more memory and use. 
	e->emp_id = 123;
	e->name_len = sizeof("Madhiyan B");
	strncpy(e->name, "Madhiyan B",e->name_len);

	printf("\r\nEmployee ID: %d\r\nEmployee name length: %d\r\nEmployee Name: %s\r\n",e->emp_id,e->name_len,e->name);

	f.ui = 1094861636;//0x41424344 65,66,67,68
	printf("%d",f.a[1]);
	free(e);
}
