#include <stdio.h>
#include <string.h>
#include <math.h>
/* /* For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Input Format

The first line contains an integer, .
The seond line contains an integer, .

Constraints


Output Format

Print the appropriate english representation,even, or odd, based on the conditions described in the 'task' section.

Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd */
#include <stdlib.h>

int main() {

    int a, b;
    char* represent[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    int i;
    for( i = a; i <= b; i++) {
        
        if(i > 9) {
            if(i % 2 == 0)
                printf("even\n");
            else printf("odd\n");
        }
        else {
            printf("%s\n", represent[i]);
        }
    }
    return 0;
}
