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

int main()
{
	int age =10;
	if(age<18)
		printf("ok\n");
	else if (age>=18 && age<26)//if只能管一行printf，多行需要加{}
		printf("ye ok\n");//else就近原则
	return 0;
}