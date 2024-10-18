#include <stdio.h>

int main() {
    int arr[30]; 
    int min, max;

    
    printf("Enter 30 integers:\n");
    for( int i = 0; i < 30; i++) {
        scanf("%d", &arr[i]);
    }

  
    min = arr[0];
    max = arr[0];

    for( int i = 1; i < 30; i++) {
        if(arr[i] < min) {
            min = arr[i]; 
        }
        if(arr[i] > max) {
            max = arr[i];  
        }
    }

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}


