#include <stdio.h>
//int main(){//���Լ�� ��С������
//	int a=10;
//	int b=8;
//	int r;
//	int c;
//	int y;
//
//	c=a*b;
//	r=a%b;
//	
//	while(r!=0){
//		a=b;
//		b=r;
//		r=a%b;
//				}
//	y=c/b;
//	printf("zuidagongyuesu: %d\n",b);
//	printf("zuixiaogongbeisu: %d\n",y);
//	
//	getchar();
//	return 0;
//}


//int main()//ͳ����ĸ���ֿո��ַ�����
//{
//	char c;
//	int number=0;
//	int letter=0;
//	int space=0;
//	int other=0;
//
//	c = getchar();
//	while(c!='\n'){
//	if((c>='a' && c<='z')||(c>='A' && c<='Z')){
//		letter++;
//	}else if (c>='0'&&c<='9'){
//		number++;
//	}else if(c == ' '){
//		space++;
//	}else{
//		other++;
//	}
//	c = getchar();
//				}
//	printf("��ĸ��%d ��,���֣�%d ��,�ո�:%d ��,������%d ��",letter,number,space,other);
//
//	return 0;
//}


//int main() //s=2+222+222+2222����������s
//{
//	int n=1;
//	int a=2;
//	int t=a;
//	int sum=0;
//	while(n<=5){
//		a=a*10;
//		a=a+t;
//		printf("a=%d\n",a);
//		sum=sum+a;
//		n++;
//	}
//	printf("sum= %d\n",sum+t);
//
//	getchar();
//	return 0;
//}

//
//int main() //����
//{
//	int t = 0;
//	for (int i = 1; i < 1000; i++){
//		for (int j = 1; j < i; j++){			
//			if(i % j == 0)
//				t += j;
//		}
//		if (i == t)
//			printf("%d\n", i);
//	}
//	return 0;
//}



//int main()//С�򷴵�
//{
//	float h=100;
//	float s=100;
//	int c=10;
//	h=h/2;
//	for(c=2;c<=10;c++){
//		s=s+h*2;
//		h=h/2;
//	}
//	printf("%f,%f",s,h);
//	getchar();
//	return 0;
//}

//int main()//���ӳ���
//{
//	int day;
//	int y=0;
//	int x=1;
//	for(day=9;day>=1;day--){
//		y=(x+1)*2;
//		x=y;
//	}
//	printf("%d",x);
//	getchar();
//	return 0;
//}

//int main()//��ӡ����
//{
//	int i;
//	int j;
//	int k;
//	int n;
//	for(i=0;i<4;i++){
//		for(j=0;j<3-i;j++){
//		printf(" ");
//	}
//			for(k=0;k<2*i+1;k++){
//			printf("*");
//	}
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}