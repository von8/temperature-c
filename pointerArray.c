#include<stdio.h>
void main(){
    int a[10];
    int *p;
    for(p=a;p<(a+10);p++)
        scanf("%d",p);
    printf("\n");
    p=a;
    for(int i=0;i<10;i++)
        printf("%d",*p++);
    printf("\n");
}
