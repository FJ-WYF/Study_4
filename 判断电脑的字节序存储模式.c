#include <stdio.h>
//判断电脑的字节序存储模式
int check_sys()
{
	int a = 1;//在大端存储模式中1在内存中的十六进制为0x00000001，小端中为0x01000000
	char* p = &a;//通过char类型的指针访问a的第一个字节
	return *p;//返回第一个字节的值
}
int main()
{
	int x = check_sys();
	if (x == 1)//如果第一个字节为01，则返回值为1，为小端存储模式
		printf("小端");
	else//如果第一个字节为00，则返回值为0，为大端存储模式
		printf("大端");
	return 0;
}
