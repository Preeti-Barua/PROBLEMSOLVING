#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    triangle temp;
    float ar[n],p,v,temp1; int i,round;
    for(i=0;i<n;i++)
    {
        p=(tr[i].a + tr[i].b+tr[i].c)/2.0;
        v=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        ar[i]=v;
            }
            for(round=1;round<n;round++)
            {
                for(i=0;i<n-round;i++)
                {
                    if(ar[i]>ar[i+1])
                    {
                        temp1=ar[i];
                        ar[i]=ar[i+1];
                        ar[i+1]=temp1;

                        temp=tr[i];
                        tr[i]=tr[i+1];
                        tr[i+1]=temp;
                    }
                }
            }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
