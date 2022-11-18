// Program which accepts string from user and convert it into lower case

#include<stdio.h>
#include<stdbool.h>

void strlwrx(char *str)
{
	while(*str != '\0')
	{
		if(*str>='A'&& *str<='Z')
		{
			*str=*str+32;
		}
		printf("%c",*str);
		str++;
	}
		
}

int main()
{
	char arr[20];

	
	printf("Enter string \n");
	scanf("%[^'\n']s",arr);
	
	strlwrx(arr);
	
	return 0;
}