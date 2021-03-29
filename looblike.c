#include<stdio.h>
    void main(){
        int x,n,i,scores[10001]={0},min=10000,max=0,choose,maxs=0,check=0;
        scanf("%d",&n);
        if(n>=2&&n<=1000){
            for( i=0 ; i<n ; i++ ){
                scanf("%d",&choose);
                if(choose<1||choose>10000){
                    x++;
                    break;
                }
                if(max<choose){
                    max=choose;
                }
                if(min>choose){
                    min=choose;
                }
                scores[choose]++;
            }
            if(x==0){
                for( i=min ; i<=max ; i++ ){
                    if(scores[i]>=maxs){
                        maxs=i;
                    }
                }
                for( i=min ; i<=max ; i++ ){
                    if(scores[maxs]==scores[i]){
                        printf("%d ",i);
                    }
                }
            }
        }
    }
