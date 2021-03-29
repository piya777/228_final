#include<stdio.h>
    void main(){
        int n,c,k;
        scanf("%d %d",&k,&c);
        n=k;
        while(k!=c){
            while(k>10){
                k=k%10;
            }
            if(k<c){
                k++;
                n++;
            }
            else{
                k--;
                n--;
                n+=10;
            }
        }
        printf("%d",n);
    }
