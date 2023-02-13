#include <stdio.h>
//int main()
//{
//	int a=10;
//	printf("%p\n",&a);    //%p是用来打印地址的
//	int * pa= &a;     //pa用来存放地址，pa叫指针变量（不固定））
//	//*说明pa是指针变量
//	//int说明pa执行对象是int类型
//
//	char ch='w';
//	char*pc=&ch;
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int *pa= &a;
//	*pa=20;//解引用操作，*pa通过pa的地址找到a
//	printf("%d\n",a);
//	return 0;
//}

//struct stu //创建学生
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//};
////创建一个书的类型
//struct book
//{
//	char name [20];
//	float prince;
//	char id[30];
//};

//int main()
//{
//	struct stu s={"zjoops",20,85.5};//结构体的创建和初始化
//	printf("1:%s %d %lf\n",s.name,s.age,s.score);//结构体变量.成员变量
//
//	struct stu*ps=&s;
//	printf("2:%s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);
//	printf("3:%s %d %lf\n",ps->name,ps->age,ps->score);//结构体指针->成员变量名
//
//	return 0;
//}


//用函数，比大小
//int max(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a =0;
//	int b =0;
//	scanf_s("%d %d",&a,&b);
//	int m=max(a,b);
//	printf("%d\n",m);
//	return 0;
//}

//int main()
//{
//	int age =10;
//	if(age<18)
//		printf("ok\n");
//	else if (age>=18 && age<26)//if只能管一行printf，多行需要加{}
//		printf("ye ok\n");//else就近原则
//	return 0;
//}

//int main()
//{
//	int num=11;
//	if(1==num%2)
//		printf("jishu\n");
//	return 0;
//}

//int main()
//{
//	int x=0;
//	printf("请输入一个整数");
//	scanf("%d",&x);
//	if(x%2 == 0) 
//		printf("%d是偶数\n",x);
//	else 
//		printf("%d是奇数\n",x);
//	return 0;
//}


//int main()
//{
//	int day=0;
//	scanf_s("%d",&day);
//	switch(day)  //整型表达式
//	{
//	case 1:    //整型常量表达式
//		printf("zhou 1");
//		break;
//	case 2:
//		printf("zhou 2");
//		break;
//	case 3:
//		printf("zhou 3");
//		break;
//	case 4:
//		printf("zhou 4");
//		break;
//	case 5:
//		printf("zhou 5");
//		break;
//	case 6:
//		printf("zhou 6");
//		break;
//	case 7:
//		printf("zhou 7");
//		break;
//	default:
//		printf("shu ru cuo wu");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int a=1;
//	while(a<=10)
//	{
//		if (5==a)
//			break; //while循环中，break用于永久的终止循环
//		           //continue的作用是跳出本次循环continue后面的代码，直接去判断部分看是否进行下一次循环
//		printf("%d\n",a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a=1;
//	int sum=0;
//	while(a<=100)
//	{
//		sum=sum+a;
//		a++;
//	}
//	printf("%d\n",sum);
//	return  0;
//}