// Program which accepts string from user and return the difference between frequency of small characters and frequency of capital characters

import java.io.*;
import java.util.*;

class Assignment47_3
{
	public static void main(String arg[])
	{
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a string : ");
		String str=sobj.nextLine();
		
		StringDemo obj=new StringDemo();
		iRet=obj.CountDiff(str);
		System.out.println(iRet);
	}
}

class StringDemo
{
	public int CountDiff(String str)
	{
		int i=0,iSumC=0,iSumS=0;
		char[] ch=str.toCharArray();
		for(i=0;i<ch.length;i++)
		{
			if(ch[i]>='a' && ch[i]<'z')
			{
				iSumS++;
			}
			else if(ch[i]>='A' && ch[i]<'Z')
			{
				iSumC++;
			}
		}
		return (iSumS-iSumC);
	}
}
