#include <stdio.h>
//int main()
//{
//	int a=10;
//	printf("%p\n",&a);    //%p��������ӡ��ַ��
//	int * pa= &a;     //pa������ŵ�ַ��pa��ָ����������̶�����
//	//*˵��pa��ָ�����
//	//int˵��paִ�ж�����int����
//
//	char ch='w';
//	char*pc=&ch;
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int *pa= &a;
//	*pa=20;//�����ò�����*paͨ��pa�ĵ�ַ�ҵ�a
//	printf("%d\n",a);
//	return 0;
//}

//struct stu //����ѧ��
//{
//	char name[20];//��Ա����
//	int age;
//	double score;
//};
////����һ���������
//struct book
//{
//	char name [20];
//	float prince;
//	char id[30];
//};

//int main()
//{
//	struct stu s={"zjoops",20,85.5};//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n",s.name,s.age,s.score);//�ṹ�����.��Ա����
//
//	struct stu*ps=&s;
//	printf("2:%s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);
//	printf("3:%s %d %lf\n",ps->name,ps->age,ps->score);//�ṹ��ָ��->��Ա������
//
//	return 0;
//}


//�ú������ȴ�С
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
//	else if (age>=18 && age<26)//ifֻ�ܹ�һ��printf��������Ҫ��{}
//		printf("ye ok\n");//else�ͽ�ԭ��
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
//	printf("������һ������");
//	scanf("%d",&x);
//	if(x%2 == 0) 
//		printf("%d��ż��\n",x);
//	else 
//		printf("%d������\n",x);
//	return 0;
//}


//int main()
//{
//	int day=0;
//	scanf_s("%d",&day);
//	switch(day)  //���ͱ��ʽ
//	{
//	case 1:    //���ͳ������ʽ
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
//			break; //whileѭ���У�break�������õ���ֹѭ��
//		           //continue����������������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ��ֿ��Ƿ������һ��ѭ��
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