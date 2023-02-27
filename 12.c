#include<stdio.h>
int main(){
    int a;
    int sum = 0;
    scanf("%d",&a);
    int j = a;
    for (int i= 0;i < j - 1;i++){
        a = a * 10 + j;
        printf("%d\n",a);
        sum += (a);
    }
    printf("ans:%d\n",sum);
    return 0;
}