#include<stdio.h>
int main()
{
	char str1[] = "3+4";  //简易计算器V0 
	int a, b;
	a = str1[0] - '0';
	b = str1[2] - '0';
	printf("V0=%d\n\n", a + b);//简易计算器V0