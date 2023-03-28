#include <stdio.h>
int main()
{
	char c1='C';
	char c2='h';
	char c3='i';
	char c4='n';
	char c5='a';

	c1+=5;
	c2+=5;
	c3+=5;
	c4+=5;
	c5+=5;

	printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
	getchar();
	return 0;
}