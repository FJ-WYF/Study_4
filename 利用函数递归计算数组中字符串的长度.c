#include <stdio.h>
int my_strlen(char* arr)
{
	while (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	if (*arr == '\0')
		return 0;
}
int main()
{
	char arr[]= "I LOVE WYF!";
	int length=my_strlen(&arr);
	printf("数组arr的字符长度为：%d", length);
	return 0;
} 
