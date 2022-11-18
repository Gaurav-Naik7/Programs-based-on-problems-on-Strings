// Program which accepts two strings and concat second string after another

#include<stdio.h>
#include<stdbool.h>

void StrCpyX(char *str,char *dest)
{
	while(*str != '\0')
	{
		str++;
	}
	
	while(*dest != '\0')
	{
		*str=*dest;
		str++;
		dest++;
	}
	
	*str='\0';
}

int main()
{
	char arr[50];
	char brr[30];
	
	printf("Enter string ");
	scanf("%[^'\n']s",arr);
	
	getchar();
	
	printf("Enter string ");
	scanf("%[^'\n']s",brr);
	
	StrCpyX(arr,brr);
	printf("%s",arr);
	return 0;
}