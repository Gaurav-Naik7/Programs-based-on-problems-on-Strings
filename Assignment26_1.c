// Program which accepts string and one character, check whether that character is present in string or not

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{

	bool bRet=false;
	
	while(*str != '\0')
	{
		if(*str==ch)
		{
			bRet=true;
			break;
		}
		str++;
	}
	
	return bRet;
}

int main()
{
	char arr[20];
	bool bRet;
	char cValue='\0';

	printf("Enter string ");
	scanf("%[^'\n']s",arr);
	
	getchar();
	
	printf("Enter a character ");
	scanf("%c",&cValue);

	bRet=ChkChar(arr,cValue);
	
	if(bRet==true)
	{
		printf("Character found");
	}
	else
	{
		printf("Character not found");
	}
	return 0;
}