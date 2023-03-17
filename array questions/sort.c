// // // // // // // #include <stdio.h>

// // // // // // // void bubble_sort(int arr[], int n) {
// // // // // // //   int i, j;
// // // // // // //   for (i = 0; i < n - 1; i++) {
// // // // // // //     for (j = 0; j < n - i - 1; j++) {
// // // // // // //       if (arr[j] > arr[j + 1]) {
// // // // // // //         int temp = arr[j];
// // // // // // //         arr[j] = arr[j + 1];
// // // // // // //         arr[j + 1] = temp;
// // // // // // //       }
// // // // // // //     }
// // // // // // //   }
// // // // // // // }

// // // // // // // int main() {
// // // // // // //   int arr[] = {4,44354,634,63};
// // // // // // //   int n = sizeof(arr) / sizeof(arr[0]);

// // // // // // //   bubble_sort(arr, n);

// // // // // // //   printf("Sorted array: ");
// // // // // // //   for (int i = 0; i < n; i++) {
// // // // // // //     printf("%d ", arr[i]);
// // // // // // //   }
// // // // // // //   printf("\n");

// // // // // // //   return 0;
// // // // // // // }


// // // // // // // #include <stdio.h>

// // // // // // // int main() {
// // // // // // //     int arr[10] = { 12, 43, 54, 7, 23, 9, 56, 87, 34, 68 };
// // // // // // //     int i, max, min;
    
// // // // // // //     max = arr[0]; // assume first element is the maximum
// // // // // // //     min = arr[0]; // assume first element is the minimum
    
// // // // // // //     for (i = 1; i < 10; i++) {
// // // // // // //         if (arr[i] > max) {
// // // // // // //             max = arr[i]; // update max if a bigger value is found
// // // // // // //         }
// // // // // // //         if (arr[i] < min) {
// // // // // // //             min = arr[i]; // update min if a smaller value is found
// // // // // // //         }
// // // // // // //     }
    
// // // // // // //     printf("Maximum value is %d\n", max);
// // // // // // //     printf("Minimum value is %d\n", min);
    
// // // // // // //     return 0;
// // // // // // // }

// // // // // // // #include <stdio.h>

// // // // // // // int main() {
// // // // // // //    int matrix1[3][3] = {{1, 2, 3},
// // // // // // //                         {4, 5, 6},
// // // // // // //                         {7, 8, 9}};
// // // // // // //    int matrix2[3][3] = {{10, 11, 12},
// // // // // // //                         {13, 14, 15},
// // // // // // //                         {16, 17, 18}};
// // // // // // //    int sum[3][3], diff[3][3];
// // // // // // //    int i, j;

// // // // // // //    // performing matrix addition
// // // // // // //    for(i=0; i<3; i++) {
// // // // // // //       for(j=0; j<3; j++) {
// // // // // // //          sum[i][j] = matrix1[i][j] + matrix2[i][j];
// // // // // // //       }
// // // // // // //    }

// // // // // // //    // performing matrix subtraction
// // // // // // //    for(i=0; i<3; i++) {
// // // // // // //       for(j=0; j<3; j++) {
// // // // // // //          diff[i][j] = matrix1[i][j] - matrix2[i][j];
// // // // // // //       }
// // // // // // //    }

// // // // // // //    // printing the result of matrix addition
// // // // // // //    printf("Sum of the matrices:\n");
// // // // // // //    for(i=0; i<3; i++) {
// // // // // // //       for(j=0; j<3; j++) {
// // // // // // //          printf("%d ", sum[i][j]);
// // // // // // //       }
// // // // // // //       printf("\n");
// // // // // // //    }

// // // // // // //    // printing the result of matrix subtraction
// // // // // // //    printf("Difference of the matrices:\n");
// // // // // // //    for(i=0; i<3; i++) {
// // // // // // //       for(j=0; j<3; j++) {
// // // // // // //          printf("%d ", diff[i][j]);
// // // // // // //       }
// // // // // // //       printf("\n");
// // // // // // //    }
   
// // // // // // //    return 0;
// // // // // // // }

// // // // // // #include <stdio.h>

// // // // // // #define ROW1 3
// // // // // // #define COL1 2
// // // // // // #define ROW2 2
// // // // // // #define COL2 3

// // // // // // int main() {
// // // // // //     int mat1[ROW1][COL1] = {{1, 2}, {3, 4}, {5, 6}};
// // // // // //     int mat2[ROW2][COL2] = {{1, 2, 3}, {4, 5, 6}};
// // // // // //     int res[ROW1][COL2] = {0};

// // // // // //     // Matrix multiplication
// // // // // //     for(int i=0; i<ROW1; i++) {
// // // // // //         for(int j=0; j<COL2; j++) {
// // // // // //             for(int k=0; k<ROW2; k++) {
// // // // // //                 res[i][j] += mat1[i][k] * mat2[k][j];
// // // // // //             }
// // // // // //         }
// // // // // //     }

// // // // // //     // Print result
// // // // // //     printf("Result matrix:\n");
// // // // // //     for(int i=0; i<ROW1; i++) {
// // // // // //         for(int j=0; j<COL2; j++) {
// // // // // //             printf("%d ", res[i][j]);
// // // // // //         }
// // // // // //         printf("\n");
// // // // // //     }

// // // // // //     return 0;
// // // // // // }

// // // // // #include <stdio.h>

// // // // // int main() {
// // // // //    int rows, cols, i, j;

// // // // //    printf("Enter the number of rows and columns of the matrix: ");
// // // // //    scanf("%d %d", &rows, &cols);

// // // // //    int matrix[rows][cols];

// // // // //    printf("Enter the elements of the matrix:\n");

// // // // //    for (i = 0; i < rows; i++) {
// // // // //       for (j = 0; j < cols; j++) {
// // // // //          scanf("%d", &matrix[i][j]);
// // // // //       }
// // // // //    }

// // // // //    // Transpose the matrix
// // // // //    int transpose[cols][rows];

// // // // //    for (i = 0; i < cols; i++) {
// // // // //       for (j = 0; j < rows; j++) {
// // // // //          transpose[i][j] = matrix[j][i];
// // // // //       }
// // // // //    }

// // // // //    // Display the transpose of the matrix
// // // // //    printf("The transpose of the matrix is:\n");

// // // // //    for (i = 0; i < cols; i++) {
// // // // //       for (j = 0; j < rows; j++) {
// // // // //          printf("%d ", transpose[i][j]);
// // // // //       }
// // // // //       printf("\n");
// // // // //    }

// // // // //    return 0;
// // // // // }


// // // // #include <stdio.h>

// // // // int main() {
// // // //     int matrix[10][10];
// // // //     int i, j, size, sum = 0;

// // // //     printf("Enter size of square matrix: ");
// // // //     scanf("%d", &size);

// // // //     // Reading elements into the matrix
// // // //     printf("Enter elements of matrix:\n");
// // // //     for (i = 0; i < size; i++) {
// // // //         for (j = 0; j < size; j++) {
// // // //             scanf("%d", &matrix[i][j]);
// // // //         }
// // // //     }

// // // //     // Finding sum of diagonal elements
// // // //     for (i = 0; i < size; i++) {
// // // //         sum += matrix[i][i];
// // // //     }

// // // //     printf("Sum of diagonal elements = %d\n", sum);

// // // //     return 0;
// // // // }

// // // #include <stdio.h>

// // // int main() {
// // //     // declare a character array with a size of 10
// // //     char myArray[10];
    
// // //     // initialize the array with characters
// // //     myArray[0] = 'H';
// // //     myArray[1] = 'e';
// // //     myArray[2] = 'l';
// // //     myArray[3] = 'l';
// // //     myArray[4] = 'o';
// // //     myArray[5] = ',';
// // //     myArray[6] = ' ';
// // //     myArray[7] = 'W';
// // //     myArray[8] = 'o';
// // //     myArray[9] = 'r';
    
// // //     // print out the characters in the array
// // //     printf("%s\n", myArray);
    
// // //     return 0;
// // // }

// // #include <stdio.h>
// // #include <string.h>

// // #define MAX_SIZE 100

// // int main() {
// //     char source[MAX_SIZE], destination[MAX_SIZE];
// //     printf("Enter a string to copy: ");
// //     fgets(source, MAX_SIZE, stdin);
// //     // Remove the newline character from the end of the input string
// //     source[strcspn(source, "\n")] = '\0';
// //     // Copy the string from source to destination
// //     strcpy(destination, source);
// //     printf("The copied string is: %s\n", destination);
// //     return 0;
// // }


// #include <stdio.h>

// int main() {
//     // Input function: scanf
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("You entered: %d\n", num);

//     // Output function: printf
//     float f = 3.14;
//     printf("The value of f is: %f\n", f);

//     // Output function: puts
//     char str[] = "Hello, world!";
//     puts(str);

//     return 0;
// }


//#include <stdio.h>
//#include <string.h>

//#define MAX_SIZE 100

//int main() {
//    // String input function: fgets
//    char str[MAX_SIZE];
//    printf("Enter a string: ");
//    fgets(str, MAX_SIZE, stdin);
//    // Remove the newline character from the end of the input string
//    str[strcspn(str, "\n")] = '\0';
//    printf("You entered: %s\n", str);
//
//    // String output function: puts
//    char str2[] = "Hello, world!";
//    puts(str2);

  //  return 0;
//}



#include<stdio.h>
void main()
{
  int i;
  for ( i = 1; i <= 10; ++i)
  {
    printf("%d\n",i*2);
  }
  
}
// {
//     int n,f;
//     int fact (int);
//     printf("enter a no. :");
//     scanf("%d", & n);
//     f = fact(n);               int fact(int n)
//                                 {
//                                     int f;
//                                     if(n<2)
//                                     return 1;
//                                     f = n *fact(n-1);
//                                     return f;

//                                 }
// printf("\n the factorial of %d is : %d", n,f);
// getch();

// }

