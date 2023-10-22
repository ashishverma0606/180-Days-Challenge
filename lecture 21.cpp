
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n; 
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cout<<"Enter Elements: ";
//     for(int i=0; i<n; i++)
//     cin>>arr[i];
    
    
//     for(int i=1; i<n; i++)
//     {
//         for(int j=i; j>0; j--)
//         {
//             if(arr[j] < arr[j-1])
//             swap(arr[j], arr[j-1]);
//             else
//             break;
//         }
//     }
    
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
    
    

//     return 0;
// }





//#1 Decreasing order

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n; 
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cout<<"Enter Elements: ";
//     for(int i=0; i<n; i++)
//     cin>>arr[i];
    
    
    // for(int i=1; i<n; i++)
    // {
    //     for(int j=i; j>0; j--)
    //     {
    //         if(arr[j] > arr[j-1])
    //         swap(arr[j], arr[j-1]);
    //         else
    //         break;
    //     }
    // }
    
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }






// #2: Insertion Sort Algorithm to sort the array of integers in 
// increasing order if we start from the last element of the array. 


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[1000];
//     int n; 
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     cout << "Enter Elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = n - 2; i >= 0; i--) {  // Start from the last element and move towards the first element.
//         int current = arr[i];
//         int j = i + 1;

//         while (j < n && current < arr[j]) {  
//             arr[j - 1] = arr[j];
//             j++;
//         }

//         arr[j - 1] = current;
//     }

//     cout << "Sorted array in increasing order: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

