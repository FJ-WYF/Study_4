#include <stdio.h>
void Print(int a)
{
	if (a / 10 != 0)
		Print(a / 10);
	printf("%d ", a%10);
}
int main()
{
	int a;
	scanf("%d", &a);
	Print(a);
	return 0;
}
