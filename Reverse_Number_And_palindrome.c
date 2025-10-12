#include <stdio.h>

int main(){
int num,original_num,reverse,rem;
reverse=0;
printf("Enter the num: ");
scanf("%d",&num);

original_num=num;

while(num!=0){
rem=num%10;
reverse=reverse*10+rem;
num=num/10;

}
printf("reverse number is = %d\n",reverse);

if (original_num==reverse)
    printf("Palindrome");
else
    printf("Not Palindrome");

    return 0;
}