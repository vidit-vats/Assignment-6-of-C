#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    int n,i,flag;

    printf("Enter a number: ");
    scanf("%d",&n);

    if (n==1){
        printf("Neither Composite Not Prime Number\n");
        exit(0);
    }

    if (n==2){
        printf("Prime Number entered\n");
        exit(0);
    }
    
        for (i=2;i<=n-1;i++)
        {
            if (n%i==0)
            {
                flag=1;
                break;
            }         
        }
        if (flag==1)
        printf("Not a Prime Number\n");

        else 
        printf("Prime Number\n");
    return 0;
}