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

int main()
{
	int age =10;
	if(age<18)
		printf("ok\n");
	else if (age>=18 && age<26)//ifֻ�ܹ�һ��printf��������Ҫ��{}
		printf("ye ok\n");//else�ͽ�ԭ��
	return 0;
}