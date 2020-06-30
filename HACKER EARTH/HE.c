/*  Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like


So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108
SAMPLE INPUT 
2
18
40
SAMPLE OUTPUT 
19 WS
45 AS */
#include<stdio.h>
#include<conio.h>
void main()
{
	
	       int seat;
	       int T,s;
	      // printf("enter the testcases:");
	       scanf("%d",&T);
	       //printf("enter the seat number:");
	       scanf("%d",&seat);
	       
	       
	       s=seat%12;
	       switch(s)
	       {
	       	case 1: printf("%d ",seat+11);printf("WS");
	       	break;
	       	case 2: printf("%d ",seat+9);printf("MS");
	       	break;
	       	case 3: printf("%d ",seat+7);printf("AS");
	       	break;
			case 4: printf("%d ",seat+5);printf("WS");
	       	break;
	       	case 5: printf("%d ",seat+3);printf("MS");
	       	break;
	       	case 6: printf("%d ",seat+1);printf("AS");
	       	break;
	       	case 7: printf("%d ",seat-1);printf("WS");
	       	break;
	       	case 8: printf("%d ",seat-3);printf("MS");
	       	break;
	       	case 9: printf("%d ",seat-5);printf("AS");
	       	break;
	       	case 10: printf("%d ",seat-7);printf("WS");
	       	break;
	       	case 11: printf("%d ",seat-9);printf("MS");
	       	break;
	       	case 0: printf("%d ",seat-11);printf("AS");
	       	break;
	       	
		   }
}

