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
void Bit_Fields();
void structure_padding();
void Variable_Size();
void Const_member();
void struct_concepts()


struct foo1 {
    char *p;
    char c;
    long x;
};

struct foo4 {
    short s;     /* 2 bytes */
    char c;      /* 1 byte */
};

struct foo3 {
    char *p;     /* 8 bytes */
    char c;      /* 1 byte */
};

struct foo5 {
    char c;
    struct foo5_inner {
        char *p;
        short x;
    } inner;
};
	
struct foo6 {
    short s;
    char c;
    int flip:1;
    int nybble:4;
    int septet:7;
};

struct foo7 {
    int bigfield:31;
    int littlefield:1;
};

struct foo8 {
    int bigfield1:31;
    int littlefield1:1;
    int bigfield2:31;
    int littlefield2:1;
};

struct foo9 {
    int bigfield1:31;
    int bigfield2:31;
    int littlefield1:1;
    int littlefield2:1;
};

struct foo10 {
    char c;
    struct foo10 *p;
    short x;
};

struct foo11 {
    struct foo11 *p;
    short x;
    char c;
};

struct foo12 {
    struct foo12_inner {
        char *p;
        short x;
    } inner;
    char c;
};


struct Variable_size{
	int a;
	int b;
	unsigned char *ptr;
};

struct Bit_fields{
	unsigned int hour:5;
	unsigned int minute:6;
	unsigned int second:6;
}s_bitfields;
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

void struct_concepts()
{
	printf("1. Structure padding");
	printf("2. Variable size struct");
	printf("3. Structure Bit fields");
	printf("4. Constant inside struct");
	scanf("%d",option);
	switch(option)
	{
		case 1:
			structure padding();
			break;
		case 2:
			Variable_Size();
			break;
		case 3:
			Bit_Fields();
			break;
		case 4:
			Const_member();
			break;
		default:
			printf("sizeof(char *)        = %zu\n", sizeof(char *));
 			printf("sizeof(long)          = %zu\n", sizeof(long));
			printf("sizeof(int)           = %zu\n", sizeof(int));
			printf("sizeof(short)         = %zu\n", sizeof(short));
			printf("sizeof(char)          = %zu\n", sizeof(char));
			printf("sizeof(float)         = %zu\n", sizeof(float));
			printf("sizeof(double)        = %zu\n", sizeof(double));
			printf("sizeof(struct foo1)   = %zu\n", sizeof(struct foo1));
			//printf("sizeof(struct foo2)   = %zu\n", sizeof(struct foo2));
			printf("sizeof(struct foo3)   = %zu\n", sizeof(struct foo3));
			printf("sizeof(struct foo4)   = %zu\n", sizeof(struct foo4));
			printf("sizeof(struct foo5)   = %zu\n", sizeof(struct foo5));
			printf("sizeof(struct foo6)   = %zu\n", sizeof(struct foo6));
			printf("sizeof(struct foo7)   = %zu\n", sizeof(struct foo7));
			printf("sizeof(struct foo8)   = %zu\n", sizeof(struct foo8));
			printf("sizeof(struct foo9)   = %zu\n", sizeof(struct foo9));
			printf("sizeof(struct foo10)   = %zu\n", sizeof(struct foo10));
			printf("sizeof(struct foo11)   = %zu\n", sizeof(struct foo11));
			printf("sizeof(struct foo12)   = %zu\n", sizeof(struct foo12));
			printf("Wrong option!!!!\r\nWhat concept would you like to learn? Try again!!!");
	}
}
void Variable_Size()
{
	struct Variable_size s_varsize = {1,2,"Hello this is a new string"};
	struct Variable_size strut_array = {1,2,{1,2,3,4,5}};
	printf("%s",s_varsize.ptr);
	printf("array element: %d",strut_array.ptr);
}
void Const_member()
{
	printf("constmember is under construction");
}
void Bit_Fields()
{
	
	printf("\r\n########################################################################\r\n");
	printf("This s to illustrate Bit fields,\r\nSize of struct is %d\r\n",sizeof(s_bitfields));
	printf("struct Bit_fields{\r\n\tunsigned int hour:5;\t//occupies 5 bits\r\n");
	printf("\tunsigned int minutes:6;\t //takes 6 bits \r\n\tunsigned int second:6;\t //takes 6 bits \r\n");
	printf("}; //total of 17bits that can be occupied in a word");
	printf("\r\n########################################################################\r\n");
}
void structure_padding()
{
	printf("This is to illustrate structure padding");
}
