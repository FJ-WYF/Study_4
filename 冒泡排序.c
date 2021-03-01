#include <stdio.h>
//从小到大将数组排序；
void Bubblesort(int sz, int arr[])
{
	int i=0, j=0;//i为冒泡排序的趟数，j为每一趟左右两个数比较的次数;
	for (i = 0; i <= sz - 1; i++)
	{
		int flag = 1;//假设进入循环时数组是有序的;
		for (j=0;j<sz-1-i;j++)
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;//假设此时数组无序；
			}
		if (1 == flag)//数组有序，退出循环；
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
