/*
方法一：试除法
#include <stdio.h> 
int main()
{
	int a = 100,i;
	for (a = 100; a <= 200; a++)
	{
		for (i = 2; i < a; i++)
		{
			if (a % i == 0)
				break;
			if (i == a-1) //所有2至a-1之间的数都不能被整除
			{
				printf("%d ", a);
			}
		}
	}
	return 0;
}
*/
//试除法优化（引用sqrt函数---开平方，以及头文件#include <math.h>）
#include <stdio.h> 
#include <math.h>
int main()
{
	int a = 100,i;
	for (a = 101; a <= 200; a+=2)
	{
		for (i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
				break;
		}	
			if (i>sqrt(a)) //所有2至a-1之间的数都不能被整除
				printf("%d ", a);
	}
	return 0;
}
