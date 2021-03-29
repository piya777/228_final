#include<stdio.h>
    void main(){
        int n,i,scores[10000]={0},min=10000,max=0,choose,maxs=0,check=0;
        scanf("%d",&n);
        for( i=0 ; i<n ; i++ ){
            scanf("%d",&choose);
            if(max<choose){
                max=choose;
            }
            if(min>choose){
                min=choose;
            }
            scores[choose]++;
        }
        for( i=min ; i<=max ; i++ ){
            if(scores[i]>maxs){
                maxs=i;
                check++;
            }
        }
        if(check>1){
            for( i=min ; i<=max ; i++ ){
                if(scores[i]==maxs){
                    printf("%d ",i);
                }
            }
        }
        printf("%d",maxs);
    }
