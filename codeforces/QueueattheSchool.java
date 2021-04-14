import java.util.Scanner;
public class QueueattheSchool
{
    //https://codeforces.com/problemset/problem/266/B
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int t=sc.nextInt();
        String s=sc.next();
        char[] ch=s.toCharArray();
        int i;

    
/* BGGBG
 * GBGGB
 * 
 * 
 * */

        while(t>0)
        {
        for(i=0;i<ch.length-1;i++)
        {
           if(ch[i]=='B' && ch[i+1]=='G')
               {
	                ch[i]='G';
	                ch[i+1]='B';
	                i++;
               }
        }t--;
        }

        for(i=0;i<ch.length;i++)
        {
            System.out.print(ch[i]);
        }
        

    
    }
}


/*
take String input

char array

if(s.i == B && s.i+1=='G')

s.i=G

s.i+1=B





 */