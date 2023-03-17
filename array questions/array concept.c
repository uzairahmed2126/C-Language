#include <stdio.h>

void selection_sort(int arr[], int n) {
   int i, j, min_idx;

   // sort the array
   for (i = 0; i < n-1; i++) {
      min_idx = i;
      for (j = i+1; j < n; j++) {
         if (arr[j] < arr[min_idx]) {
            min_idx = j;
         }
      }
      int temp = arr[min_idx];
      arr[min_idx] = arr[i];
      arr[i] = temp;
   }
}

int main() {
   int arr[5]; // declaration of integer array of size 5
   
   // input elements of the array
   printf("Enter 5 integers:\n");
   for (int i = 0; i < 5; i++) {
      scanf("%d", &arr[i]);
   }

   // sort the array
   selection_sort(arr, 5);

   // output sorted array
   printf("\nSorted array:\n");
   for (int i = 0; i < 5; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}
