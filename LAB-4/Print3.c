/*
5   10  15  20
10  15  20  25
15  20  25  30
20  25  30  35
*/

#include<stdio.h>

int main (){
    for (int i =5; i<=20; i+=5){
        for ( int j = i; j<i+20 ;j+=5 ){
        printf("%d\t",j);
        }
    printf("\n");
    }
    return 0;
}