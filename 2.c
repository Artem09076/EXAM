#include <stdio.h>
int sumFoo(int n){
    int summ=0;
    for (int i = 3; i <= n; i++)
    {
        summ+=((i-2)*(i-1)*i);
    }
    return summ;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=sumFoo(n);
    printf("%d",result);
}