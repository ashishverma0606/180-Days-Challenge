
// #include <iostream>
// using namespace std;


// int BinarySearch(int arr[], int n, int key){
    
//     int start=0, end=n-1, mid;
    
//     while(start<=end){
        
//         mid = (start + end) / 2;
        
//         if(arr[mid] == key)
//         return mid;
//         else if(arr[mid]<key)
//         start = mid + 1;
//         else
//         end = mid - 1;
//     }
//     return -1;
// }


// int main()
// {
//     int arr[1000];
//     int n; 
//     cout<<"Enter the number of element in array: ";
//     cin>>n;
//     cout<<"Enter the element: ";
//     for(int i=0; i<n; i++)
//     cin>>arr[i];
    
//     int key;
//     cout<<"Enter the key: ";
//     cin>>key;
    
//     cout<<BinarySearch(arr,n,key);
    
//     return 0;
// }




// -------------------- practice questioon --------------------------------------


// #1 An array is given in decreasing order with Key, 
//Find the index of key, if key is not present, print -1;




// #include <iostream>
// using namespace std;

// int BinarySearchDecreasing(int arr[], int n, int key) {
//     int start = 0, end = n - 1, mid;

//     while (start <= end) {
//         mid = start + (end - start) / 2; 

//         if (arr[mid] == key)
//             return mid;
//         else if (arr[mid] < key)
//             end = mid - 1; 
//         else
//             start = mid + 1; 
//     }
//     return -1; // Key not found
// }

// int main() {
//     int arr[1000];
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements in decreasing order: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int key;
//     cout << "Enter the key to search for: ";
//     cin >> key;

//     int result = BinarySearchDecreasing(arr, n, key);

//     if (result != -1)
//         cout << "Key found at index: " << result << endl;
//     else
//         cout << "Key not found." << endl;

//     return 0;
// }






// #2 Search insert position


// #include <iostream>
// using namespace std;

// int FindInsertPosition(int arr[], int n, int key) {
//     int start = 0, end = n - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key)
//             return mid; 

//         if (arr[mid] < key)
//             start = mid + 1;
//         else
//             end = mid - 1;
//     }

//     return start;
// }

// int main() {
//     int arr[1000];
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements in ascending order: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int key;
//     cout << "Enter the key to find or insert: ";
//     cin >> key;

//     int position = FindInsertPosition(arr, n, key);

//     cout << "The key should be inserted at position: " << position << endl;

//     return 0;
// }














