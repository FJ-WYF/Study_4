#include <stdio.h> 
#include <stlib.h> 
//дһ���������ж�һ���ַ����Ƿ�����һ���ַ�����ת֮����ַ���
//����s1=ABCD,s2=CDBA,����1
//����s1=abcd,s2=ABCD,����0
void reverse(char* left, char* right)
{
	while (left < right)
	{
		assert(left);
		assert(right);
		char tmp = *(left);
		*(left) = *(right);
		*(right) = tmp;
		left++; 
		right--;
	}
}
void Left_Move(char* p,int k)
{
	assert(p);
	int len = strlen(p);
	assert(k<len);
	reverse(p,p+k-1);//����ǰk��
	reverse(p+k,p+len-1);//�����len-k��
	reverse(p,p+len-1);//���������ַ���
}
int Judge_reversion(char* arr1, char* arr2)
{
	int len = strlen(arr1);
	int k = 0;
	for (k = 0; k < len; k++)
	{
		Left_Move(arr1, 1);
		if (strcmp(arr1, arr2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "ABCDEF";
	char arr2[] = "CDEFAB";
	int ret=Judge_reversion(arr1,arr2);
	if (ret == 1)
		printf("arr1��arr2�������ַ���");
	else
		printf("arr1����arr2�������ַ���");
	return 0;
}
//�����������ÿ⺯�� 
//int Judge_reversion(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1, arr2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//	int ret=Judge_reversion(arr1, arr2);
//	if (ret == 1)
//		printf("arr1��arr2�������ַ���");
//	else
//		printf("arr1����arr2�������ַ���");
//	return 0;
//}

