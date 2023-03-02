#include <stdio.h>
int main()//1234四个数字，能组成多少互不重复数字的三位数，分别都是多少
{
	int g=0;//个
	int s=0;//十
	int b=0;//百	
	int count=0;
	for(b=1;b<5;b++)
	{
		for(s=1;s<5;s++)
		{
			for(g=1;g<5;g++)
			{
				if (g!=s && s!=b && b!=g)//各不相同
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