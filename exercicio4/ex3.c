#include<stdio.h>

main(){

    int A = 10, B = 11, C = 12;

    if(A < B && A < C){
        printf("%d", A);
        if(B < C){
            printf("%d %d", B, C);
        }else{
            printf("%d %d", C, B);
        
        }
    }else if(B < A && B < C){
        printf("%d", B);
        if(A < C){
            printf("%d %d", A, C);
        }else{
            printf("%d %d", C, A);
        
        }
    }else{
        printf("%d", C);
        if(A < B){
            printf("%d %d", A, B);
        }else{
            printf("%d %d", B, A);
        
        }
    }
    
}