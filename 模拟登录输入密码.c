#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char password[] = "ILOVEWYF";//����
	printf("���������룺");
	char input[20] = "";//���������
	int sz = strlen(password);
	int i = 0;//�������������ԭ����ȽϵĴ���
	for (i=1;i<=3;i++)//�����������Σ�����ѭ������
	{
		scanf("%s", input);//����������봫�����鲻��Ҫ&����Ϊ��������ʾ���Ǹ�����ĵ�ַ
		if (strcmp(input, password) == 0)//input��password���,���ʱ strcmp(input, password)����ֵ��0 
		{
			printf("��½�ɹ�");
			break;
		}
		if (i == 3)
		{
			printf("��½ʧ�ܣ�");
			break;
		}
		printf("�������\n");
		printf("�������������룺");
	}
	return 0;
}
