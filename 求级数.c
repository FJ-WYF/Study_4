#include <stdio.h>
int main()
{
	int x = 0;
	double y = 0.0;
	double last = 0.0;
	int n = 1;
	scanf("%d", &x);
	do {
		long long num = 1;//����
		long long deno = 1;//��ĸ
		int exp = n;//���ӵ�ָ��
		while (exp)//������ӣ���x��n�η�
		{
			num *= x;
			exp--;
		}
		int i = 0;//���ڼ����ĸ�׳˵�ѭ������
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
