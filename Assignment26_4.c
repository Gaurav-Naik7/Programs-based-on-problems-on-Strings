// Program which accepts string and one character, return last occurrence of character

#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str,char ch)
{
	int iCnt=0;
	int iTrav=0;
	int iLength=0;
	char *temp=str;
	
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
			
	for(iTrav=0;iTrav<iLength;iTrav++)
	{
		iCnt++;
		if(*str==ch)
		{
			break;
		}
		
		else if(iCnt==iLength)
		{
			iCnt=iLength+2;
		}
		
		str--;
	}
	
	return (iLength-iCnt+1);
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

	iRet=LastChar(arr,cValue);
	printf("Character location is %d",iRet);
	
	return 0;
}