#include<stdio.h>
 
int main(){
int number,i=2;
printf("Enter a number: ");
scanf("%d",&number);
 
while(i<number && number%i!=0){
i++;
}
    if ( number >1 && number==i)
        printf("%d is a prime number.\n",number);
     else 
        printf("%d is not a prime number.\n",number);
    
    return 0;
}