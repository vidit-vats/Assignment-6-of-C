#include <stdio.h>

int main (int argc, char *argv[]) {
    int i,n,f=1;
    printf("Enter the no of which factorial is to be calculated: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
        f=f*i;
    
    printf("Result: %d\n",f);
    return 0;
}