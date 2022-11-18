// Program which accepts string from user and check whether it contains vovels in it or not

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
	int iCountC=0;
	int iCountS=0;
	
	while(*str != '\0')
	{
		if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
		{
			return true;
			break;
		}	
		str++;
	}
}

int main()
{
	char arr[20];
	bool bRet;
	
	printf("Enter string \n");
	scanf("%[^'\n']s",arr);
	
	bRet=ChkVowel(arr);
	
	if(bRet==true)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}