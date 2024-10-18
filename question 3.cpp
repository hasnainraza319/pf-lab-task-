#include <stdio.h>

int main() {
    int numbers[10];  
    int z,j,k, first_Element;


    printf("Enter 10 numbers:\n");
    for(z = 0; z < 10; z++) {
        scanf("%d", &numbers[z]);
    }

    first_Element = numbers[0];

 
    for(j = 0; j < 9; j++) {
        numbers[j] = numbers[j + 1];
    }


    numbers[9] = first_Element;

  
    printf(" shifting one position to the left:\n");
    for(k= 0; k < 10; k++) {
        printf("%d ", numbers[k]);
    }
    printf("\n");

    return 0;
}

