#include <stdio.h>
int getSeconds(int k){
    int result=k%3600;
    return result;
}
int main(){
    int k;
    scanf("%d",&k);
    int result=getSeconds(k);
    printf("%d\n",result);
}