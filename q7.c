#include <stdio.h>

int main (int argc, char *argv[]) {

    int n,dig,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        dig=n%10;
        n=n/10;
        count++;
    }

    printf("No is a %d-digit no\n",count);
    return 0;
}