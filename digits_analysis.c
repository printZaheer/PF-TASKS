#include<stdio.h>

int main (){
int num,digit ,sum,product,total_even_number,total_odd_number;
sum=0;
product=1;
total_even_number=0;
total_odd_number=0;
printf("Enter a Number : ");
scanf("%d",&num);

if (num<0)
num=-num;
while (num>0){
    digit=num%10;
    sum = sum + digit;
    product = product *digit;

    if (digit%2==0){
        total_even_number++;
    }else{
    total_odd_number++;
    }
num = num/10;
}
printf("Sum = %d\n",sum);
printf("Product = %d\n", product);
printf("Even number = %d\n", total_even_number);
printf("Odd number = %d\n",total_odd_number);

return 0;
}