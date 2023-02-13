#include <stdio.h>

//int main()
//{
	//int a =0;
	//int b =0;
	//int sum=0;
	//scanf_s("%d %d",&a,&b);
	//sum=a+b;
	//printf("sum=%d\n",sum);
	//int man=2001;
	//printf("%d\n",man);
	//int num=10;
	//num =20;
	//printf("num=%d\n",num);
	//char arr[]="hello";
	/*printf("\a\a");*/
	/*printf("%c\n",'\130');*/
	//int input=0;
	//printf("chifan");
	//printf("yaochifanma(1/0)?");
	//scanf_s("%d",&input);
	//
	//if(input == 1)
	//	printf("chibaole\n");
	//else
	//	printf("ele\n");
	//return 0;
//}

//int main()
//{
//	int line=0;
//	while(line<300)
//	{
//		printf("xie dai ma:%d\n",line);
//		line++;
//	}
//	if (line=100)
//	{	
//		printf("cheng wei da niu");
//	}
//	return 0;
//}
//int main()
//{
//	int num1=0;
//	int num2=0;
//	scanf("%d%d",&num1,&num2);
//	
//	int sum=num1+num2;
//	printf("%d\n",sum);
//
//	return 0;
//}

//int add(int x, int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int main()
//{
//	int num1=0;
//	int num2=0;
//	scanf_s("%d%d",&num1,num2);
//	int sum=add(num1,num2);
//	printf("%d\n",sum);
//	return 0;
//}
//int main()
//{
//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//int i=0;
//while(i<10)
//	{
//	printf("%d",arr[i]);
//	i++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10]={0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sz);
//return 0;
//}
//int main()
//{
//	int a=1;
//	int b=++a;
//	printf("%d\n",b);
//return 0;
//}
//int main()
//{
//	int a=8;
//		printf("%d\n",++a);
//	return 0;
//}
//int main()
//{
//	int a=3;
//	int b=2;
//	int max=0;
//	max=a>b?a:b;
//	printf("%d\n",max);
//	
//	return 0;
//}
//int main()
//{
//	int a=1;
//	a++;
//	printf("%d\n",a);
//	return 0;
//}
//void test()
//{
//	static int a=1;
//	a++;
//	printf("%d",a);
//}
//int main()
//{
//	int i=0;
//	while(i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int add(int x,int y)
//{
//	return x+y;
//}
//
//extern int add(int x,int y);
//
//int main()
//{
//	int a=20;
//	int b=30;
//	int sum=add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}
#define add(x,y) (x+y)
int main()
{
	printf("%d\n",4*add(2,3));
	return 0;
}