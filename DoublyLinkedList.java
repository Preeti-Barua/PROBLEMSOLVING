package labexam;

import java.util.Scanner;
//QUESTION 1

public class DoublyLinkedList {
	

			Node head;
		    static class Node {
		    	String Name;
		    	int RollNo;
		    	String Course;
		        double TotalGrade;
		        Node next;
		        Node prev;
		        Node(String Name, int RollNo, String Course, double TotalGrade) {
		        	this.Name = Name;
		        	this.RollNo = RollNo;
		        	this.Course = Course;
		            this.TotalGrade = TotalGrade;
		            next = null;
		            prev = null;
		        }
		    }
		    
		    public static DoublyLinkedList InsertAtEnd(DoublyLinkedList dlist, String Name, int RollNo, String Course, double TotalGrade) {
		        Node temp = new Node(Name, RollNo, Course, TotalGrade);
		        if(dlist.head == null){
		            dlist.head = temp;
		            return dlist;
		        }
		        else{
		            Node temp1 = dlist.head;
		            while(temp1.next != null)
		                temp1 = temp1.next;
		            temp1.next = temp;
		            temp.prev=temp1;
		            return dlist;
		        }
		    }
		    
		    public static DoublyLinkedList update(DoublyLinkedList dlist) {
		        Scanner sc = new Scanner(System.in);
		        System.out.println("Enter the StudentName Whose record you want to update");
		        String Name = sc.next();
		        Node temp =dlist.head;
		        while(temp.Name.equals(Name)!=true && temp.next != null)
		            temp = temp.next;
		        System.out.println("What do you want to Update?");
		        System.out.println("1. Course");
		        System.out.println("2. Total Grade");
		        int c = sc.nextInt();
		        
		        if (c==1) {
		        	System.out.println("Enter the Course");
		        	temp.Course = sc.next();
		        }
		        else {
		        	System.out.println("Enter the Total Grade");
		        	temp.TotalGrade = sc.nextDouble();	
		        }
		    	
		        return dlist;
		   }
		    
		    public static void delete(DoublyLinkedList dlist, int RollNo) {
		    	Node prev = dlist.head;
		    	Node temp = dlist.head;
		    	while(temp.RollNo!=RollNo && temp.next != null) {
		    		prev = temp;
		    		temp = temp.next;
		    	}
		    	prev.next=temp.next;
		    	temp.next = null;
		    }
		    
		    public static void print(DoublyLinkedList dlist) {
		        Node temp = dlist.head;
		        while(temp != null) {
		            System.out.print(temp.Name + " ");
		            System.out.print(temp.RollNo + " ");
		            System.out.print(temp.Course + " ");
		            System.out.print(temp.TotalGrade +" ");
		            System.out.println();
		            temp = temp.next;
		            
		        }
		        System.out.println();
		    }
		    
		    
			public static void main(String[] args) {
				// TODO Auto-generated method stub
				DoublyLinkedList dlist = new DoublyLinkedList();
				dlist = InsertAtEnd(dlist, "sia", 101, "java", 90);
				System.out.println();
				dlist = InsertAtEnd(dlist, "heya", 102, "c++", 70);
				System.out.println();
				dlist = InsertAtEnd(dlist, "apoorv", 103, "java", 45);
				System.out.println();
				dlist = InsertAtEnd(dlist, "ankush", 104, "dac", 60);
				System.out.println();
				print(dlist);
				System.out.println("after adding last record-");
				dlist = InsertAtEnd(dlist, "harnoor", 105, "vlsi", 65);
				print(dlist);
				System.out.println("after deleting ankush record-");
				delete(dlist, 104);
				print(dlist);
				update(dlist);
				System.out.println("after updating record");
				print(dlist);

			}

		}





