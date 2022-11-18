// Program which accepts string from user and display it in reverse order

#include<stdio.h>
#include<stdbool.h>

void StrReverse(char *str)
{
	int iLength=0;
	int iCnt=0;
	
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%c",str[-1]);
		str--;
	}
}

int main()
{
	char arr[20];

	
	printf("Enter string \n");
	scanf("%[^'\n']s",arr);
	
	StrReverse(arr);
	
	return 0;
}