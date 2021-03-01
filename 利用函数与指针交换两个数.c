#include <stdio.h>
void Swap(int *a, int *b)
{
	int tem;
	tem = *a;
	*a = *b;
	*b = tem;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap(&a,&b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}

