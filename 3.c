#include<stdio.h>
    void main(){
        int x,y,z,i,j,comp=0,check=0,sum=0,comp1;
        scanf("%d %d %d",&x,&y,&z);
        int a[x][x],b[y][y],c[z][z];
        for( i=0 ; i<x ; i++ ){
            for( j=0 ; j<x ; j++ ){
                scanf("%d",&a[i][j]);
            }
        }
        for( i=0 ; i<x ; i++ ){
            sum+=a[0][i];
        }
        for( i=1 ; i<x ; i++ ){
            for( j=0 ; j<x ; j++ ){
                comp+=a[i][j];
            }
        }
        if(comp!=sum){
            printf("no\n");
            check++;
        }
        if(check==0){
            comp=0; comp1=0;
            for( i=0 ; i<x ; i++ ){
                comp+=a[i][i];
                comp1+=a[x-i][x-i];
            }
            if(comp!=sum || comp1!=sum){
                printf("no\n");
                check++;
            }
            if(check==0){
                printf("yes\n");
            }
        }
        check=0; comp=0;
        sum=0;

        for( i=0 ; i<y ; i++ ){
            for( j=0 ; j<y ; j++ ){
                scanf("%d",&b[i][j]);
            }
        }
        for( i=0 ; i<y ; i++ ){
            sum+=b[0][i];
        }
        for( i=1 ; i<y ; i++ ){
            for( j=0 ; j<y ; j++ ){
                comp+=b[i][j];
            }
        }
        if(comp!=sum){
            printf("no\n");
            check++;
        }
        if(check==0){
            comp=0; comp1=0;
            for( i=0 ; i<y ; i++ ){
                comp+=b[i][i];
                comp1+=b[y-i][y-i];
            }
            if(comp!=sum || comp1!=sum){
                printf("no\n");
                check++;
            }
            if(check==0){
                printf("yes\n");
            }
        }
        check=0;
        sum=0; comp=0;

        for( i=0 ; i<z ; i++ ){
            for( j=0 ; j<z ; j++ ){
                scanf("%d",&c[i][j]);
            }
        }
        for( i=0 ; i<z ; i++ ){
            sum+=c[0][i];
        }
        for( i=1 ; i<z ; i++ ){
            for( j=0 ; j<z ; j++ ){
                comp+=c[i][j];
            }

        }
        if(comp!=sum){
            printf("no\n");
            check++;
        }
        if(check==0){
            comp=0; comp1=0;
            for( i=0 ; i<z ; i++ ){
                comp+=c[i][i];
                comp1+=c[x-i][x-i];
            }
            if(comp!=sum || comp1!=sum){
                printf("no\n");
                check++;
            }
            if(check==0){
                printf("yes\n");
            }
        }
        check=0;
    }
