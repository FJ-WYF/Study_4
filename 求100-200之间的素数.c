/*
����һ���Գ���
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
			if (i == a-1) //����2��a-1֮����������ܱ�����
			{
				printf("%d ", a);
			}
		}
	}
	return 0;
}
*/
//�Գ����Ż�������sqrt����---��ƽ�����Լ�ͷ�ļ�#include <math.h>��
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
			if (i>sqrt(a)) //����2��a-1֮����������ܱ�����
				printf("%d ", a);
	}
	return 0;
}
