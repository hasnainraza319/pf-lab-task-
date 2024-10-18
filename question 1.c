#include <stdio.h>

int main() {
    int numbers[] = {11, 23, 35, 47, 59, 71, 83, 95, 107, 119};  
    int size = sizeof(numbers) / sizeof(numbers[0]);  
    int searchNumber, j;

    printf("Enter the number to search: ");
    scanf("%d", &searchNumber);

 
    for(j = 0; j < size; j++) {
        if(numbers[i] == searchNum) {
            printf("Number %d found at index %d\n", searchNumber, j);
            return 0; 
        }
    }

   
    printf("Number %d not found in  array.\n", searchNumber);

    return 0;
}
