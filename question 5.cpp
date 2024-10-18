#include <stdio.h>

int main() {
    int arr[15]; 
         
    int total = 0;


    printf(" please input 15 numbers:\n");
    for( int i = 0; i < 15; i++) {
        scanf("%d", &arr[i]); 
        
    }
    for(int i = 0; i< 15;i++){
    	total+=arr[i];
	}


    printf("The total sum is: %d\n",total);

    return 0;
}

