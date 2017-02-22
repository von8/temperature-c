#include<stdio.h>
void main(){
    int a[10];
    int *p;
    for(p=&a[0];p<(a+10);p++)
        scanf("%d",p);
    printf("\n");
    for(p=&a[0];p<(a+10);p++)
        printf("%d",*p);
    printf("\n");
}
