#include<stdio.h>
    void main(){
        int n,c,k,x=0;
        scanf("%d %d",&k,&c);
        n=k;
        while(k>10){
            k=k%10;
        }
        while(k!=c){
            if(k>10){
                k=k%10;
                x++;
            }
            k++;
            n++;
        }
        printf("%d",n+(10*(x-1)));
    }
