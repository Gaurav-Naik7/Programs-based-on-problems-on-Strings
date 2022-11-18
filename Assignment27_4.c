// Program which accepts string and copy the small characters of that string into another string

#include<stdio.h>
#include<stdbool.h>

void StrCpySmall(char *str,char *dest)
{

	while(*str != '\0')
	{
		if((*str>='a')&&(*str<='z') || (*str==' '))
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
	
	StrCpySmall(arr,brr);
	printf("%s",brr);
	return 0;
}