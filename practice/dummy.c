#include <stdio.h>
struct new{
	int a;
	int b;
	int *ptr;
};
int main()
{
	struct new hehe = {1,2,"Hello"};
//	int *a = "hi this is madhi";
	printf("%s",*hehe.ptr);
}
