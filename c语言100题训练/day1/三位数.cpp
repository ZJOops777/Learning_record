#include <stdio.h>
int main()//1234�ĸ����֣�����ɶ��ٻ����ظ����ֵ���λ�����ֱ��Ƕ���
{
	int g=0;//��
	int s=0;//ʮ
	int b=0;//��	
	int count=0;
	for(b=1;b<5;b++)
	{
		for(s=1;s<5;s++)
		{
			for(g=1;g<5;g++)
			{
				if (g!=s && s!=b && b!=g)//������ͬ
				{
					printf("%d,%d,%d\n",b,s,g);
					count++;
				}
			}
		}
	}
					printf("%d\n",count);
	getchar();
	return 0;
}