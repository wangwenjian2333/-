#include<stdio.h>
	char str3[] = "2*2/4*1/1*2*3/2"; //���׼�����V2
	int result;
	result = str3[0] - '0';
	for (i = 1; str3[i] != '\0'; i++)
	{
		if (str3[i] == '*' || str3[i] == '/')
		{
			switch (str3[i])
			{
			case '*':result = result * (str3[i + 1] - '0'); break;
			case '/':result = result / (str3[i + 1] - '0'); break;
			}
		}
	}
	printf("V2=%d\n\n", result);//���׼�����V2
