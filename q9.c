#include <stdio.h>

int main (int argc, char *argv[]) {
    int i,n1,n2,lcm;
    printf("Enter two nos: ");
    scanf("%d%d",&n1,&n2);

    for (i=1;i<=n1*n2;i++)
    {
        if (i%n1==0 && i%n2==0)
        {
            lcm=i;
            break;
        }
    }
    printf("LCM: %d\n",lcm);
    return 0;
}