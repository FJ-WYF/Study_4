#include <stdio.h>
//����1��շת����� 
int main()
{
	int a=24, b=18 , r=1 ;
	scanf_s("%d%d", &a,&b);
	while (r = a % b)
	{
		a = b;
		b = r;
	}
	printf("%d", b);
	return 0;
}
/*�������������� 
#include <stdio.h>
int main()
{
	int i,a,b;
	scanf_s("%d%d", &a, &b);
	if (a < b)
	{
		int tem = a;
		a = b;
		b = tem;
	}
	for (i = a; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}
*/ 
