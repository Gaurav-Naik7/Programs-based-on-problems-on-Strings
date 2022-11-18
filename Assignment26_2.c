// Program which accepts string and one character, return frequency of character

#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str,char ch)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		str++;
	}
	
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet;
	char cValue='\0';

	printf("Enter string ");
	scanf("%[^'\n']s",arr);
	
	getchar();
	
	printf("Enter a character ");
	scanf("%c",&cValue);

	iRet=CountChar(arr,cValue);
	printf("Character frequency is %d",iRet);
	
	return 0;
}