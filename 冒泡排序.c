#include <stdio.h>
//��С������������
void Bubblesort(int sz, int arr[])
{
	int i=0, j=0;//iΪð�������������jΪÿһ�������������ȽϵĴ���;
	for (i = 0; i <= sz - 1; i++)
	{
		int flag = 1;//�������ѭ��ʱ�����������;
		for (j=0;j<sz-1-i;j++)
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;//�����ʱ��������
			}
		if (1 == flag)//���������˳�ѭ����
			break;
	}
}
int main()
{
	int arr[] = { 1,4,6,8,9,3,2,5,7,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(sz,arr);
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}
