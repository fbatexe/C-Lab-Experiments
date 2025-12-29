// 2.	WAP to print the multiplication table of the number entered by the user.
//  It should be in the correct formatting.   Num * 1 = Num 

#include <stdio.h>
 
int main() {
    int n,x,i;

    printf("Enter no. you want to print table :");
    scanf("%d",&n);

    printf("Your table is \n");

    for(i=1 ; i<=10 ; i++) {
        x = n*i;
        printf("%d * %d = %d \n",n,i,x);
    }
    return 0;
}