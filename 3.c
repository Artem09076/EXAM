#include <stdio.h>
int main(){
    int n,summ=0;
    scanf("%d",&n);
    while (n!=0)
    {
        if (n%10==3)
        {
            summ+=n;
        }
        scanf("%d",&n);
    }
    printf("%d\n",summ);
}