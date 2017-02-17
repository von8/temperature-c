#include<stdio.h>
int main(){
    int t=1;
    int i;
    
    for(i=2;i<=5;){
        t=t*i;
        i=i+1;
    }

    printf("t=%d\n",t);
}

