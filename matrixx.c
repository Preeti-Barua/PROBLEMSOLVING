#include<stdio.h>

int main()
{

	int a[10][10], T[10][10];
	int r,c;
	
	int i,j;
	scanf("%d  %d",&r, &c);
	printf("enter the elements of matrix::\n");
  for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
           
            scanf("%d", &a[i][j]);
        }
    printf("before transpose:");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            
        }
    for(i=0;i<r;++i)
     {
     	  for(j=0;j<c;++j)
     	{
         	T[j][i]=a[i][j];
		 }
	 }
	 printf("after transpose:\n");
	  for(i=0;i<r;++i)
     {
     	for(j=0;j<c;++j)
     	{
     		printf("%d ", T[i][j]);
     		
		 }
		 printf("\n");
	 
     }
     return 0;
}

