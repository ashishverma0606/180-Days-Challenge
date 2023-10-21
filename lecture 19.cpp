// #include <iostream>

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;

//         // Find the index of the minimum element in the unsorted portion
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         if (minIndex != i) {
//             std::swap(arr[i], arr[minIndex]);
//         }
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     selectionSort(arr, n);

//     std::cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }





//----------------------  Practice Question -------------------------------------


// #1: Selection Sort Algorithm to sort the array of integers in decreasing order.



// #include <iostream>

// void selectionSortDescending(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int maxIndex = i;

//         // Find the index of the maximum element in the unsorted portion
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] > arr[maxIndex]) {
//                 maxIndex = j;
//             }
//         }

//         // Swap the maximum element with the first element of the unsorted portion
//         if (maxIndex != i) {
//             std::swap(arr[i], arr[maxIndex]);
//         }
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     selectionSortDescending(arr, n);

//     std::cout << "Sorted array in descending order: ";
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }






//#2 Selection Sort Algorithm to sort the array of char in ascending order.




// #include <iostream>
// #include <cstring> // Include the C string library for string functions

// void selectionSortAscending(char arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;

//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         if (minIndex != i) {
//             std::swap(arr[i], arr[minIndex]);
//         }
//     }
// }

// int main() {
//     char arr[] = "selectionsort";
//     int n = strlen(arr);

//     selectionSortAscending(arr, n);

//     std::cout << "Sorted string in ascending order: " << arr << std::endl;

//     return 0;
// }

