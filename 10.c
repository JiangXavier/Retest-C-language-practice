#include<stdio.h>
int main(){
    for(int i = 100;i<500;i++){
        int a = i % 10;
        int b = (i / 10) % 10;
        int c = i / 100;
        if ((a*a*a + b*b*b + c*c*c) == i){
            printf("%d %d %d %d\n",i,a,b,c);
        }
    }
    return 0;
}