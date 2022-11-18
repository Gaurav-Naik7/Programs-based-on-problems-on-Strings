// Program which accepts string from user and count the number of small letters

#include<stdio.h>

int CountSmall(char *str)
{
	int iCount=0;
	
	while(*str != '\0')
	{
		if(*str>='a'&& *str<='z')
		{
			iCount++;
		}
		str++;
	}

	return iCount;
}

int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter string \n");
	scanf("%[^'\n']s",arr);
	
	iRet=CountSmall(arr);
	
	printf("%d",iRet);
	
	return 0;
}