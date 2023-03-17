#include<stdio.h>
int main() {
   int arr[5] = {1, 2, 3, 4, 5}; // Initializing an array with 5 integers
   
   // Accessing array elements using index
   printf("First element: %d\n", arr[0]); // Output: First element: 1
   printf("Third element: %d\n", arr[2]); // Output: Third element: 3
   
   // Modifying array elements using index
   arr[1] = 10; // Changing the value of the second element
   printf("Second element: %d\n", arr[1]); // Output: Second element: 10
   
   // Looping through array elements using a for loop
   printf("Array elements: ");
   for(int i=0; i<5; i++) {
      printf("%d ", arr[i]); // Output: Array elements: 1 10 3 4 5
   }
   
//    Using sizeof() function to get the size of an array
   int size = sizeof(arr)/sizeof(arr[0]); // Calculates the size of the array
   printf("\nArray size: %d", size); // Output: Array size: 5
   
   return 0;
}
