//import java.util.Arrays;
//import java.util.Scanner;
//
//public class SpyDetected {
//
//	public static void main(String[] args) 
//	{
//		// TODO Auto-generated method stub
//		Scanner sc=new Scanner(System.in);
//		//int t=sc.nextInt();
//	//	for(int i=0;i<t;i++)
//		//{
//			int n=sc.nextInt();
//			int A[]=new int[n];
//			for(int j=0;j<n;j++)
//			{
//				A[j]=sc.nextInt();
//				
//			}
//		
//			
//		
//			for(int j=0;j<n-1;j++)
//			{
//				if(A[j+1]-A[j]>0)
//				{
//					System.out.println(j+1);
//					
//					
//				}
//			}
//		}
//
//	}
//
////}


import java.util.Arrays;
import java.util.Scanner;


public class SpyDetected{
    public static void main(String[] args){
        Scanner sObj = new Scanner(System.in);
        int css = sObj.nextInt();
        for(int zz=0; zz<css; zz++){
            int arrSize = sObj.nextInt();
            int arr[] = new int[arrSize];
            int freq[] = new int[101];
            
            
            for(int i=0; i<arrSize; i++){
                int num = sObj.nextInt();
                arr[i] = num;
                freq[num] += 1;
            }
         //   System.out.println(Arrays.toString(arr));
         
            int value = 0;
            for(int j=0; j<101; j++){
                if(freq[j] == 1){
                    value = j;
                    break;        
                }
            }
            
            for(int k=0; k<arrSize; k++){
                if(arr[k] == value){
                    System.out.println(k+1);
                    break;
                }
            }

        }
    }
}
