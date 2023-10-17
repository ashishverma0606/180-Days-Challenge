
#include<iostream>

using namespace std;

int main()
{
    // int arr[] = {1,2,3,4,5,6};
    // for(int i=0; i<6; i++)
    // cout<<arr[i]<<" ";
    
    
    
    
    // int arr[6] = {0};
    // for(int i=0; i<6; i++)
    // cout<<arr[i]<<" ";
    
    
    
    
    
    //  int arr[6];
    // for(int i=0; i<6; i++)
    // cin>>arr[i];
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }
    
    
    
    
    // int arr[5] = {1,33,44,2,5};
    // cout<<arr[4];
    // cout<<arr[7];  //it gives error
    
    
    
    
    
    // int a;
    // float b;
    // bool c;
    // long d;
    // char e;
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(b)<<endl;
    // cout<<sizeof(c)<<endl;
    // cout<<sizeof(d)<<endl;
    // cout<<sizeof(e)<<endl;
    
    
    
    
    // int arr[4] = {1,33,22,90};
    // cout<<sizeof(arr)/sizeof(arr[0])<<" ";
    
    
    
    
    // int arr[6] = {1,2,3,44,55,6};
    // int ans = INT_MAX;
    
    // for(int i=0; i<5; i++){
    //     if(arr[i]<ans)
    //     ans = arr[i];
    // }
    
    // cout<<ans;
    
    
    
    
    
    // int arr[6] = {1,2,3,44,55,6};
    // int ans = INT_MIN;
    
    // for(int i=0; i<6; i++){
    //     if(arr[i]>ans)
    //     ans = arr[i];
    // }
    // cout<<ans;
    
    
    
    
    // --- Sum of Array----
    
    // int num;
    // cout<<"Enter the size of the array";
    // cin>>num;
    // int arr[num];
    // cout<<"Enter "<<num<<" numbers: ";
    // for(int i=0; i<num ;i++){
    //     cin>>arr[i];
    // }
    
    // int sum = 0;
    // for(int i=0; i<num ; i++){
    //     sum = sum + arr[i];
    // }
    // cout<<"Sum of Array is: "<<sum;
    
    
    
    
// -------------------------- Practice Question ------------------------------------------------
    
   //# 1: Take 20 elements from user input and find its sum with the help of an array.

// int arr[20];
// int sum = 0;
// for(int i = 0; i<20; i++){
//     cout<<"Enter Element "<<i+1<<": ";
//     cin>>arr[i];
//     sum = sum + arr[i];
// }
// cout<<"Total sum is: "<<sum;





//# 2: Calculate the average of elements in an array of size 18.

    // int size = 18;
    // int arr[size];
    // int sum = 0;
    // double average;  // Use a double for the average

    // for (int i = 0; i < size; i++) {
    //     cout << "Enter Element " << i + 1 << ": ";
    //     cin >> arr[i];
    //     sum = sum + arr[i];
    // }

    // average = static_cast<double>(sum) / size;  // Cast the sum to double before dividing

    // cout << "Sum is: " << sum << endl;
    // cout << "Average is: " << average;
    
    
    
    
    
    //# 3: Find the index of a specific element in an array, if the element
// is nor present, print -1. Ask the size of the array from the user and
// then implement it.


// int size;
// cout<<"Enter the size of the array";
// cin>>size;

// int arr[size];

// for(int i=0; i<size; i++){
//     cout<<"Enter Element "<<i+1<<": ";
//     cin>>arr[i];
// }

// int index = -1;
// int target;
// cout<<"Enter you number that you want to find: ";
// cin>>target;

// for(int i=0; i<size; i++){
//     if(arr[i]==target)
//     index = i;
// }

// if(index!=-1){
//     cout<<"Number present in index: "<<index;
// }
// else{
//     cout<<index;
// }






//# 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print
// the element of the arrays.


// char charArray[26];
// for(int i=0; i<26; i++){
//     charArray[i] = 'a' + i;
// }

// for(int i=0; i<26; i++){
//     cout<<charArray[i]<<" ";
// }





// 5#: Find the second largest element in an array of unique elements
// of size n. Where n>3.



// #include <iostream>
// int findSecondLargest(int arr[], int n) {
//     if (n < 2) {
//         return -1;  // Not enough elements to find a second-largest.
//     }

//     int largest = arr[0];
//     int secondLargest = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         } else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     return secondLargest;
// }

// int main() {
//     int arr[] = {5, 2, 8, 10, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int secondLargest = findSecondLargest(arr, n);

//     if (secondLargest != -1) {
//         std::cout << "Second-largest element: " << secondLargest << std::endl;
//     } else {
//         std::cout << "Not enough elements to find a second-largest." << std::endl;
//     }

//     return 0;
// }




// 6: Find the third smallest element in an array of unique elements
// size n. Where n>3.


// #include <iostream>

// int findThirdSmallest(int arr[], int n) {
//     if (n < 3) {
//         std::cout << "Array should have at least 3 elements." << std::endl;
//         return -1;  // Return a sentinel value.
//     }

//     int firstSmallest = INT_MAX;
//     int secondSmallest = INT_MAX;
//     int thirdSmallest = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] < firstSmallest) {
//             thirdSmallest = secondSmallest;
//             secondSmallest = firstSmallest;
//             firstSmallest = arr[i];
//         } else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
//             thirdSmallest = secondSmallest;
//             secondSmallest = arr[i];
//         } else if (arr[i] < thirdSmallest && arr[i] != firstSmallest && arr[i] != secondSmallest) {
//             thirdSmallest = arr[i];
//         }
//     }

//     if (thirdSmallest == INT_MAX) {
//         std::cout << "No distinct third smallest element in the array." << std::endl;
//     }

//     return thirdSmallest;
// }

// int main() {
//     int arr[] = {5, 2, 8, 1, 7, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int thirdSmallest = findThirdSmallest(arr, n);

//     if (thirdSmallest != -1) {
//         std::cout << "The third smallest element in the array is: " << thirdSmallest << std::endl;
//     }

//     return 0;
// }

    
    

    
    return 0;
}

