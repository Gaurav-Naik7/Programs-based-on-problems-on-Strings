// Program which accepts string from user and counts small characters

import java.io.*;
import java.util.*;

class Assignment47_2
{
	public static void main(String arg[])
	{
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a string : ");
		String str=sobj.nextLine();
		
		StringDemo obj=new StringDemo();
		iRet=obj.CountSmall(str);
		System.out.println(iRet);
	}
}

class StringDemo
{
	public int CountSmall(String str)
	{
		int i=0,iSum=0;
		char[] ch=str.toCharArray();
		for(i=0;i<ch.length;i++)
		{
			if(ch[i]>='a' && ch[i]<'z')
			{
				iSum++;
			}
		}
		return iSum;
	}
}
