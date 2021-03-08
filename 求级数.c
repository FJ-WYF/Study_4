#include <stdio.h>
int main()
{
	int x = 0;
	double y = 0.0;
	double last = 0.0;
	int n = 1;
	scanf("%d", &x);
	do {
		long long num = 1;//分子
		long long deno = 1;//分母
		int exp = n;//分子的指数
		while (exp)//计算分子，即x的n次方
		{
			num *= x;
			exp--;
		}
		int i = 0;//用于计算分母阶乘的循环变量
		for (i = 1;i <= n;++i)
		{
			deno *= i;
		}
		last = (double)num / (double)deno;
		y += last;
		++n;
	} while (last>1e-6);
	printf("%.5lf", y);
	return 0;
}
