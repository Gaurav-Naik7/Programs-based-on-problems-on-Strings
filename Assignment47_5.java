// Program which accepts string from user and display it in reverse order

import java.io.*;
import java.util.*;

class Assignment47_5
{
	public static void main(String arg[])
	{
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a string : ");
		String str=sobj.nextLine();
		
		StringDemo obj=new StringDemo();
		obj.Reverse(str);
		
	}
}

class StringDemo
{
	public void Reverse(String str)
	{

		int i=0,iSumC=0,iSumS=0;
		char temp='\0';
		char[] ch=str.toCharArray();
	
		for(i=0;i<ch.length/2;i++)
		{
			temp=ch[ch.length-i-1];
			ch[ch.length-i-1]=ch[i];
			ch[i]=temp;
		}
		System.out.println(ch);
	}
}
