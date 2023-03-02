#include <stdio.h>
//int main()//求利润
//{
//	int profit;
//	int bonus;
//	scanf_s("%d",&profit);
//
//	if(profit<=100000)
//	{
//		bonus=profit*0.1;
//	}
//		
//	else if(profit<=200000)
//	{
//		bonus=100000*0.1+(profit-100000)*0.75;
//	}
//	
//	else if(profit<=400000)
//	{
//		bonus=100000*0.1+100000*0.075+(profit-200000)*0.05;
//	}
//	
//	else if(profit<=600000)
//	{
//		bonus=100000*0.1+100000*0.075+200000*0.05+(profit-400000)*0.03;
//	}
//	
//	else if(profit<=1000000)
//	{
//		bonus=100000*0.1+100000*0.075+200000*0.05+400000*0.03+(profit-600000)*0.015;
//	}
//	else
//	{
//		bonus=100000*0.1+100000*0.075+200000*0.05+400000*0.03+600000*0.015+(profit-1000000)*0.01;
//	}
//	printf("bonus= %d\n",bonus);
//	getchar();
//	return 0;
//}



//int main()// 第几天
//{
//	int day;
//	int mouth;
//	int year;
//	int sum=0;
//	int leap;
//	printf("please input year and mouth and day:");
//	scanf_s("%d,%d,%d",&year,&mouth,&day);
//	switch(mouth)
//	{
//	case 1:printf("1月份\n");
//		sum=0;
//		break;
//	case 2:printf("2月份\n");
//		sum=31;
//		break;
//	case 3:printf("3月份\n");
//		sum=59;
//		break;
//		//后面省略
//	}
//	if(year % 400==0||(year%4==0&year%100!=0))//判断闰年
//		{	
//		leap=1;
//		}
//	else
//		{
//		leap=0;
//		}
//	if(leap==1&&mouth>2)
//	{
//		sum++;
//	}
//
//	sum=sum+day;
//	printf("总天数为：%d\n",sum); 
//
//	return 0;
//}


//int main()//数字排序(比大小换位置)
//{
//int a,b,c,t;
//printf("请输入三个整数：\n");
//scanf("%d，%d，%d",&a,&b,&c);
//	if(a>b)
//	{	
//		t=a;	
//		a=b;	
//		b=t;	
//	}
//	if(a>c)
//	{	
//		t=a;	
//		a=c;	
//		c=t;	
//	}
//	if(b>c)
//	{
//		t=b;	
//		b=c;	
//		c=t;	
//	}
//	printf("%d,%d,%d",a,b,c);
//	return 0;
//}

//int main()//九九乘法表
//{
//	int i;
//	int j;
//	for(j=1;j<=9;j++)//j为输出行数
//	{
//		for(i=1;i<=j;i++)//i为第j行输出多少个式子
//		{
//			printf("%d*%d=%-2d  ",j,i,i*j);//-代表左对齐，2代表占俩位，否则输出不对齐
//		}
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}


//int main()//兔子生崽
//{
//	int a=1;
//	int b=1;
//	for(int i=1;i<=40;i++)
//	{
//		printf("%d,%d,",a,b);
//		a=a+b;
//		b=b+a;
//	}
//	return 0;
//}


//int main()//101-200的素数
//{
//	int i, j;
//	for (i = 101; i <= 200; i++) 
//	{
//		for (j = 2; j < i; j++) 
//		{
//			if (i % j == 0) 
//			{
//				break;// 说明是合数
//			}
//			if (j > (i / 2)) 
//			{// 当因数大于最大因数 i / 2 时还没跳出循环，则证明该数时素数
//				printf("%d\n",i);
//				break;
//			}
//		}
//	}
//	getchar();
//	return 0;
//}


//int main()//水仙花数
//{
//	int x=0;
//	int y=0;
//	int z=0;
//	int i;
//
//	for (i=100;i<=999;i++)
//	{
//		x=i/100%10;
//		y=i/10%10;
//		z=i%10;
//
//	if(i ==(x*x*x + y*y*y + z*z*z))
//	{
//		printf("%d 是水仙花数\n",i);
//	}
//	}
//	getchar();
//	return 0;
//}


//int main()//正整数分解质因数
//{
//	int m=90;
//	int i;
//
//	printf("%d=",m);
//	for(i=2;i<=m;i++)
//	{
//		while(m%i==0)
//		{
//			printf("%d",i);
//			m=m/i;
//			if(m!=1)
//			{
//				printf("*");
//			}
//		}
//
//	}
//	getchar();
//	return 0;
//}

//
//int main ()//条件运算符嵌套
//{
//	int score=95 ;
//	char grade;
//	grade = ((score>=90)?'A' : (score>=60)? 'B':'C');//?是否为 :否则为
//	printf("grade= %c\n",grade);
//	getchar();
//	return 0;
//}