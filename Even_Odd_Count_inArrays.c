#include <stdio.h>

int main(){
    int arr[5];
    int evenCount = 0, oddCount = 0;

    printf("Enter 5 numbers:\n");


    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nEven numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);
    
    return 0;
}