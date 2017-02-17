#include<stdio.h>
int main(){
    int max(int x, int y);
    int a, b, c;
    printf("Please input the first num:");
    scanf("%d", &a);
    printf("Please input the second num:");
    scanf("%d", &b);
    c = max(a, b);
    printf("max=%d\n",c);
}

int max(int x, int y){
    int z;
    if(x>y)z=x;
    else z=y;
    return(z);
}
