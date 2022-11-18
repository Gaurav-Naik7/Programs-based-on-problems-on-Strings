// Program which accepts string from user and counts capital characters

import java.io.*;
import java.util.*;

class Assignment47_1
{
	public static void main(String arg[])
	{
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a string : ");
		String str=sobj.nextLine();
		
		StringDemo obj=new StringDemo();
		iRet=obj.CountCapital(str);
		System.out.println(iRet);
	}
}

class StringDemo
{
	public int CountCapital(String str)
	{
		int i=0,iSum=0;
		char[] ch=str.toCharArray();
		for(i=0;i<ch.length;i++)
		{
			if(ch[i]>='A' && ch[i]<'Z')
			{
				iSum++;
			}
		}
		return iSum;
	}
}
