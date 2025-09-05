#include<stdio.h>
int main(){
    int n,eq;
    printf("Enter the number: \n");
    scanf("%d",&n);

     if(n < 0){
        eq = 1;
    }
    else if(n > 0){
    eq = 2;
    }
    else{
      eq = 3;
    }



    switch(eq){
case 1:
    printf("\n The number is negative\n");
    break;

case 2:
    printf("\nThe number is positive\n");
    break;

case 3:
    printf("\nThe number is Zero\n");
    }



return 0;
}

