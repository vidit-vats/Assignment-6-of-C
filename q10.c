// program to reverse a given no 
#include <stdio.h>
int main (int argc, char *argv[]) {

    int count=0,n,i,no,dig,res=0,z=1,w=1;
    printf("Enter a no: ");
    scanf("%d",&n);

           no=n;

    while(n!=0)
    {
        dig=n%10;
        n=n/10;
        count++;
    }

    i=count-1;
   
    while(no!=0 )
    {
        dig=no%10;

      while(w<=i)
      {
              z=z*10;
              w++;
      }
      
      w=1;

       res=(dig*z)+res;
       z=1;   

        no=no/10;
        i--;
    }
   printf("Reversed Number: %d\n",res);
    return 0;
}