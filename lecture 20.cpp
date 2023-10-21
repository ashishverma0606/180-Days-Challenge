// #include <iostream>
// using namespace std;

// int main() {
//     int arr[1000];
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;
//     cout << "Enter the elements in the array: ";

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = n - 2; i >= 0; i--) {
//         bool swapped = false;

//         for (int j = 0; j <= i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swapped = true;
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//         if (!swapped)
//             break;
//     }

//     cout << "Sorted array in ascending order: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



// ------------------------------ Practice Question --------------------------------------------


// #1  Use Bubble Sort Algorithm to sort the array of integers in decreasing order.


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[1000];
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;
//     cout << "Enter the elements in the array: ";

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = n - 2; i >= 0; i--) {
//         bool swapped = false;

//         for (int j = 0; j <= i; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 swapped = true;
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//         if (!swapped)
//             break;
//     }

//     cout << "Sorted array in descending order: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }









// #2 Bubble Sort Algorithm to sort the array of integers 
//   in increasing order by taking the smallest number to 
//   first place by starting from the last.



// #include <iostream>
// using namespace std;

// int main() {
//     int arr[1000];
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     cout << "Enter the elements in the array: ";

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = n - 1; j > i; j--) {
//             if (arr[j] < arr[j - 1]) {
//                 swap(arr[j], arr[j - 1]);
//             }
//         }
//     }

//     cout << "Sorted array in increasing order: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }






// #3: Bubble Sort Algorithm to sort the array of char in ascending order.


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string arr[1000];
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     cout << "Enter the characters in the array: ";

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] > arr[j]) {
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }

//     cout << "Sorted array of strings in ascending order: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }









    
    
    
    
    
    
    
    
    
    
    
    
    
    