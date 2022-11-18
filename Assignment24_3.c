// Program which accepts string from user and return the difference of small characters and frequency of capital characters

#include<stdio.h>

int CountDif(char *str)
{
	int iCountC=0;
	int iCountS=0;
	
	while(*str != '\0')
	{
		if(*str>='a'&& *str<='z')
		{
			iCountS++;
		}
		else if(*str>='A'&& *str<='Z')
		{
			iCountC++;
		}
		str++;
	}

	return (iCountS-iCountC);
}

int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter string \n");
	scanf("%[^'\n']s",arr);
	
	iRet=CountDif(arr);
	
	printf("%d",iRet);
	
	return 0;
}