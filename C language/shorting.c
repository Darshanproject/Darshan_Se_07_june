#include <stdio.h>
int main() {
	
    int arr[10];
   int n = sizeof(arr) / sizeof(arr[0]);
     int i, j;
     for (i=0;i<5;i++)
     {
     	scanf("%d",&arr[i]);
	 }
    for (i = 0; i < arr[i]-1; i++) {
      
        for (j = 0; j < arr[i]-i-1; j++) {
        
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }  
    printf("Sorted array: ");
    for (i = 0; i < arr[i]; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

