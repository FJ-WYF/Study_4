#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char password[] = "ILOVEWYF";//密码
	printf("请输入密码：");
	char input[20] = "";//输入的密码
	int sz = strlen(password);
	int i = 0;//将输入的密码与原密码比较的次数
	for (i=1;i<=3;i++)//至多输入三次，所以循环三次
	{
		scanf("%s", input);//将输入的密码传回数组不需要&，因为数组名表示的是该数组的地址
		if (strcmp(input, password) == 0)//input和password相等,则此时 strcmp(input, password)返回值是0 
		{
			printf("登陆成功");
			break;
		}
		if (i == 3)
		{
			printf("登陆失败！");
			break;
		}
		printf("密码错误！\n");
		printf("请重新输入密码：");
	}
	return 0;
}
