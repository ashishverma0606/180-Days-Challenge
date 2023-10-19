//# Search an element in an Array

// #include <iostream>
// using namespace std;


// int Search(int arr[], int size, int target){
//     for(int i=0; i<size; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }


// int main()
// {
     
//      int arr[] = {1,2,3,4,5};
//      int size = sizeof(arr)/sizeof(arr[0]);
//      int target = 4;
     
//      int index = Search(arr, size, target);
     
//      if(index != -1){
//          cout<<"Element present in Index: "<<index;
//      }
     
//      else{
//          cout<<index;
//      }
   
//     return 0;
// }






// # Reverse an Array

// #include <iostream>
// using namespace std;

// int main()
// {
//     // # Reverse an Array
    
//     int arr[5] = {1, 2, 3, 4, 5,};
//     int start=0, end=4;
    
//     while(start<end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     };
    
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
    

//     return 0;
// }





//# Second largest element in Array


// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int arr[4] = {1, 2, 3, 4};
//     int First_largest = INT_MIN;
//     int Second_largest = INT_MIN;
    
//     for(int i=0; i<4; i++){
//         if(arr[i] > First_largest){
//             Second_largest = First_largest;
//             First_largest = arr[i];
//         }
//         else if(arr[i] > Second_largest && arr[i] != First_largest){
//             Second_largest = arr[i];
//         }
//     }
    
//     cout<<Second_largest;
    
//     return 0;
// }





// # Fibonacci series 

// #include <iostream>
// using namespace std;

// int main()
// {
    
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int arr[100];
    
//     arr[0] = 0;
//     arr[1] = 1;
    
//     for(int i=2; i<=n-1; i++)
//     arr[i] = arr[i-1] + arr[i-2];
    
//     cout<<arr[n-1]<<" ";
    
//     return 0;
// }







// #include <iostream>
// using namespace std;

// void fun(int a[], int n){
    
//     cout<<sizeof(a)<<endl;
//     for(int i=0; i<n; i++){
        
//         cout<<a[i]<<" ";
//     }

// }

// int main()
// {
//     int arr[5] = {3,2,1,6,7};
//     cout<<sizeof(arr)<<endl;
//     fun(arr,5);

//     return 0;
// }
