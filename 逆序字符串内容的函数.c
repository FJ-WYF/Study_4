#include <stdio.h> 
#include <string.h> 
#include <assert.h> 
 //ÄæĞò×Ö·û´®ÄÚÈİµÄº¯Êı£»
void Reverse(char* p)
{
	assert(p);
	int len = strlen(p);
	char* left = p;
	char* right = p + len - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0 };
	gets(arr);
	Reverse(arr);
	printf("%s", arr);
	return 0;
}
