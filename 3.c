#include<stdio.h>
    void main(){
        int x,y,z,i,j,comp=0,check=0,sum;
        scanf("%d %d %d",&x,&y,&z);
        int a[x][x],b[y][y],c[z][z];
        for( i=0 ; i<x ; i++ ){
            for( j=0 ; j<x ; j++ ){
                scanf("%d",&a[i][j]);
            }
        }
        sum=a[0][0]+a[0][1]+a[0][2];
        for( i=1 ; i<x ; i++ ){
            for( j=0 ; j<x ; j++ ){
                comp+=a[i][j];
            }
            if(comp!=sum){
                printf("no\n");
                check++;
                break;
            }
            comp=0;
        }
        if(check==0){
            comp=0;
            for( i=0 ; i<x ; j++ ){
                comp+=a[i][i];
            }
            if(comp!=sum){
                printf("no");
                check++;
            }
            if(check==0){
                printf("yes");
            }
        }
        check=0; comp=0;

        for( i=0 ; i<y ; i++ ){
            for( j=0 ; j<y ; j++ ){
                scanf("%d",&b[i][j]);
            }
        }
        sum=b[0][0]+b[0][1]+b[0][2];
        for( i=1 ; i<y ; i++ ){
            for( j=0 ; j<y ; j++ ){
                comp+=b[i][j];
            }
            if(comp!=sum){
                printf("no\n");
                check++;
                break;
            }
            comp=0;
        }
        if(check==0){
            comp=0;
            for( i=0 ; i<y ; j++ ){
                comp+=b[i][i];
            }
            if(comp!=sum){
                printf("no");
                check++;
            }
            if(check==0){
                printf("yes");
            }
        }
        check=0; comp=0;

        for( i=0 ; i<z ; i++ ){
            for( j=0 ; j<z ; j++ ){
                scanf("%d",&c[i][j]);
            }
        }
        sum=c[0][0]+c[0][1]+c[0][2];
        for( i=1 ; i<z ; i++ ){
            for( j=0 ; j<z ; j++ ){
                comp+=c[i][j];
            }
            if(comp!=sum){
                printf("no\n");
                check++;
                break;
            }
            comp=0;
        }
        if(check==0){
            comp=0;
            for( i=0 ; i<z ; j++ ){
                comp+=c[i][i];
            }
            if(comp!=sum){
                printf("no");
                check++;
            }
            if(check==0){
                printf("yes");
            }
        }
    }
