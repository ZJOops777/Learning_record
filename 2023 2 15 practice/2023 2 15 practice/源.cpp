#include <stdio.h>
//int main()
//{
//	char password[20]={0};
//	printf("请输入密码：");
//	scanf("%s",password);
//	printf("请确认密码(Y/N):");
//	
//	int tmp = 0;       //清除缓冲区，要不然会读取\n
//	while((tmp=getchar())!='\n');
//	{
//		;
//	}
//	int ch=getchar();
//	if('Y'==ch)
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("输入错误\n");
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
