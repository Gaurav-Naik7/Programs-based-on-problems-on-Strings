// Program which accepts string and one character, return first occurrence of character

#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str,char ch)
{
	int iCnt=0;
	int iLength=0;
	char *temp=str;
	
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
		
	str=temp;
	
	while(*str != '\0')
	{
		iCnt++;
		if(*str==ch)
		{
			break;
		}
		
		else if(iCnt==iLength)
		{
			iCnt=0;
		}
		
		str++;
	}
	
	return (iCnt-1);
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
	printf("Character location is %d",iRet);
	
	return 0;
}