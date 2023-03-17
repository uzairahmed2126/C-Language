// // #include <stdio.h>

// // int main() {
// //     int array[] = {1, 2, 3, 4, 5};
// //     int length = sizeof(array) / sizeof(array[0]); // calculate length of the array
// //     int sum = 0;
// //     float average;

// //     // iterate over the array and add each element to the sum
// //     for (int i = 0; i < length; i++) {
// //         sum += array[i];
// //     }

// //     // calculate the average
// //     average = (float)sum / length;

// //     // print the sum and average
// //     printf("Sum: %d\n", sum);
// //     printf("Average: %f\n", average);

// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int arr[50];
//     // int length = sizeof(arr) /sizeof(arr[0]);
//     int sum = 0;
//     int n;
//     float average;
//     printf("Enter element : ");

//     for (int i = 0; i < n; i++)
//     {
//         printf("Your element is : %d", arr[i]);
//         scanf("%d", &n);
//     }
//     {    

//         for (int i = 0; i < n; i++)
//         {
//             sum += arr[i];
//         }
//     }

//     average = (float)sum / n;
//     printf("sum: %d\n", sum);
//     printf("average: %f \n ", average);

//     return 0;
// }
#include <stdio.h>

int main() {
    int array[100]; // declare array to hold up to 100 values
    int length, sum = 0;
    float average;
    
    // ask user for length of array
    printf("Enter the length of the array (up to 100): ");
    scanf("%d", &length);
    
    // ask user for each element of the array and add it to the sum
    for (int i = 0; i < length; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
        sum += array[i];
    }
    
    // calculate the average
    average = (float)sum / length;
    
    // print the sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", average);
    
    return 0;
}
