// Program which accepts string from user and check whether it contains vovels in it or not

import java.io.*;
import java.util.*;

class Assignment47_4
{
	public static void main(String arg[])
	{
		boolean bRet=false;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a string : ");
		String str=sobj.nextLine();
		
		StringDemo obj=new StringDemo();
		bRet=obj.ChkVowel(str);
		if(bRet==true)
		{
			System.out.println("TRUE");
		}
		else
		{
			System.out.println("FALSE");
		}
	}
}

class StringDemo
{
	public boolean ChkVowel(String str)
	{
		int i=0;
		boolean flag=false;
		char[] ch=str.toCharArray();
		for(i=0;i<ch.length;i++)
		{
			if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
			{
				flag=true;
			}
		}
		return flag;
	}
}
