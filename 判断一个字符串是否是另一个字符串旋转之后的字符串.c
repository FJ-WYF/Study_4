#include <stdio.h> 
#include <stlib.h> 
//写一个函数，判断一个字符串是否是另一个字符串旋转之后的字符串
//给定s1=ABCD,s2=CDBA,返回1
//给定s1=abcd,s2=ABCD,返回0
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
	reverse(p,p+k-1);//逆序前k个
	reverse(p+k,p+len-1);//逆序后len-k个
	reverse(p,p+len-1);//逆序整个字符串
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
		printf("arr1是arr2的左旋字符串");
	else
		printf("arr1不是arr2的左旋字符串");
	return 0;
}
//方法二：利用库函数 
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
//		printf("arr1是arr2的左旋字符串");
//	else
//		printf("arr1不是arr2的左旋字符串");
//	return 0;
//}

