#include <stdio.h>
//int main()
//{
//	char password[20]={0};
//	printf("���������룺");
//	scanf("%s",password);
//	printf("��ȷ������(Y/N):");
//	
//	int tmp = 0;       //�����������Ҫ��Ȼ���ȡ\n
//	while((tmp=getchar())!='\n');
//	{
//		;
//	}
//	int ch=getchar();
//	if('Y'==ch)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	return 0;
//}

 int main( )
  {    
	char ch;
	scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    ch=ch-32;
    printf("%c",ch);
 }
