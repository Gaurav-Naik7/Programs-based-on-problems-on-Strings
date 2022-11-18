// Program which accepts string and copy the capital characters of that string into another string

#include<stdio.h>
#include<stdbool.h>

void StrCpyCap(char *str,char *dest)
{

	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
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
	
	StrCpyCap(arr,brr);
	printf("%s",brr);
	return 0;
}