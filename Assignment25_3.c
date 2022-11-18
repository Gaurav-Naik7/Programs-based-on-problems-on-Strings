// Program which accepts string from user and toggle the case

#include<stdio.h>
#include<stdbool.h>

void struprx(char *str)
{
	while(*str != '\0')
	{
		if(*str>='a'&& *str<='z')
		{
			*str=*str-32;
		}
		else if(*str>='A'&& *str<='Z')
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
	
	struprx(arr);
	
	return 0;
}