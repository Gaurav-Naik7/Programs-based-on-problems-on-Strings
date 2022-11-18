// Program which accepts string and copy the contents of that string in another string

#include<stdio.h>
#include<stdbool.h>

void StrCpyX(char *str,char *dest)
{

	while(*str != '\0')
	{
		if(*str!=' ')
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