#include <stdio.h>
//int main()//������
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



//int main()// �ڼ���
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
//	case 1:printf("1�·�\n");
//		sum=0;
//		break;
//	case 2:printf("2�·�\n");
//		sum=31;
//		break;
//	case 3:printf("3�·�\n");
//		sum=59;
//		break;
//		//����ʡ��
//	}
//	if(year % 400==0||(year%4==0&year%100!=0))//�ж�����
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
//	printf("������Ϊ��%d\n",sum); 
//
//	return 0;
//}


//int main()//��������(�ȴ�С��λ��)
//{
//int a,b,c,t;
//printf("����������������\n");
//scanf("%d��%d��%d",&a,&b,&c);
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

//int main()//�žų˷���
//{
//	int i;
//	int j;
//	for(j=1;j<=9;j++)//jΪ�������
//	{
//		for(i=1;i<=j;i++)//iΪ��j��������ٸ�ʽ��
//		{
//			printf("%d*%d=%-2d  ",j,i,i*j);//-��������룬2����ռ��λ���������������
//		}
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}


//int main()//��������
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


//int main()//101-200������
//{
//	int i, j;
//	for (i = 101; i <= 200; i++) 
//	{
//		for (j = 2; j < i; j++) 
//		{
//			if (i % j == 0) 
//			{
//				break;// ˵���Ǻ���
//			}
//			if (j > (i / 2)) 
//			{// ����������������� i / 2 ʱ��û����ѭ������֤������ʱ����
//				printf("%d\n",i);
//				break;
//			}
//		}
//	}
//	getchar();
//	return 0;
//}


//int main()//ˮ�ɻ���
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
//		printf("%d ��ˮ�ɻ���\n",i);
//	}
//	}
//	getchar();
//	return 0;
//}


//int main()//�������ֽ�������
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
//int main ()//���������Ƕ��
//{
//	int score=95 ;
//	char grade;
//	grade = ((score>=90)?'A' : (score>=60)? 'B':'C');//?�Ƿ�Ϊ :����Ϊ
//	printf("grade= %c\n",grade);
//	getchar();
//	return 0;
//}