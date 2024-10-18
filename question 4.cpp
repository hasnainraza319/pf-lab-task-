#include <stdio.h>

int main() {
    int input[12];    
    int sumPairs[6]; 
    int k;
     int j;
      int i;


    printf("Enter 12 numbers:\n");
    for(k = 0; k < 12; k++) {
        scanf("%d", &input[k]);
    }


    for(j = 0; j < 6; j++) {
        int first = input[2 * j];      
        int second = input[2 * i + 1];  
        sumPairs[i] = first + second;   
    }

   
    printf("Sum of consecutive pairs:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", sumPairs[i]);
    }
    printf("\n");

    return 0;
}

