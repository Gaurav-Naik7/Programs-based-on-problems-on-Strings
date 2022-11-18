// Program which accepts string and copy the characters of that string into another string by toggling the case

#include<stdio.h>
#include<stdbool.h>

void StrCpyX(char *str,char *dest)
{

	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
			*dest=*str;
			dest++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
			*dest=*str;
			dest++;
		}
		else
		{
			*dest=*str;
			dest++;
		}
		str++;
	}
	*dest='\0';
}

int main()
{
	char arr[30];
	char brr[30];
	
	printf("Enter string ");
	scanf("%[^'\n']s",arr);
	
	StrCpyX(arr,brr);
	printf("%s",brr);
	return 0;
}