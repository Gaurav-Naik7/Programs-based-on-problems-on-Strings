// Program which accepts string and a number. Display first input number of characters in the string

#include<stdio.h>
#include<stdbool.h>

void StrCpyX(char *str,char *dest)
{

	while(*str != '\0')
	{
		*dest=*str;
		str++;
		dest++;
	}
	
	*dest='\0';
}

void StrNCpyX(char *str,char *dest,int iCnt)
{
	int iLength=0;
	char *temp=str;
	
	while(*str!='\0')
	{
		iLength++;
		str++;
	}
	
	str=temp;
	
	if(iCnt>iLength)
	{
		StrCpyX(str,dest);
	}
	
	while((*str != '\0')&&(iCnt!=0))
	{
		*dest=*str;
		str++;
		dest++;
		iCnt--;
	}
	
	*dest='\0';
}

int main()
{
	char arr[30];
	char brr[30];
	int iValue=0;

	printf("Enter string ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter a number \n");
	scanf("%d",&iValue);
	
	StrNCpyX(arr,brr,iValue);
	printf("%s",brr);
	return 0;
}