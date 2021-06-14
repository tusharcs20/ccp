#include<stdio.h> 

int main(){

           int a,b,c,i;
           
           scanf("%d",&a);

           scanf("%d",&b);

    
           for(i=a; i<=b; ++i){

               c= i % 2;

               if(c == 0)

               printf("\n  %d",i);

           }

    return 0; 

    } 