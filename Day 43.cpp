
#include <iostream>
using namespace std;
#include <climits>


// void printcol(int arr[][4], int row, int col)
// {
//     for(int j=0; j<col; j++)
//     for(int i=0; i<row; i++)
//     cout<<arr[i][j]<<" ";
// }




// void printrowmax(int arr[][4], int row, int col)
// {
//     int index = -1, sum = INT_MIN;
    
//     for(int i=0; i<row; i++)
//     {
//         int total = 0;
//         for(int j=0; j<col; j++)
//         total+=arr[i][j];
        
//         if(total>sum)
//         {
//             sum = total;
//             index = i;
//         }
//     }
//     cout<<index<<" ";
// }





// void printsumdig(int matrix[][3], int row, int col)
// {
//     int first = 0;
//      int sec = 0;
     
//      int i=0;
//      while(i<row)
//      {
//          first+=matrix[i][i];
//          i++;
//      }
     
//      i=0;
//      int j=col-1;
//      while(j>=0)
//      {
//          sec+=matrix[i][j];
//          i++,j--;
//      }
     
//      cout<<first<<" "<<sec<<" ";
// }





int main()
{   
    // create 2 d array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    // print all the array row wise
    
    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // cout<<arr[row][col]<<" ";
    // cout<<endl;
    
    
    // print all the value in array col wise, function call
    
    // printcol(arr,3,4);
    
    
    
    // find an element in array
    
    // int x=70;
    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // {
    //     if(arr[row][col] == x)
    //     {
    //         cout<<"Yes ";
    //         return 0;
    //     }

    // }
    // cout<<"No";
    
    
    
    // Add two matrix
    
    // int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr2[3][4] = {2,4,1,8,3,7,4,2,7,1,13,12};
    // int ans[3][4];
    
    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // {
    //     ans[row][col] = arr1[row][col] + arr2[row][col];
    // }
    // for(int i=0; i<3; i++)
    // for(int j=0; j<4; j++)
    // cout<<ans[i][j]<<" ";
    
    
    
    
    // subtract two matrix
    
    // int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr2[3][4] = {2,4,1,8,3,7,4,2,7,1,13,12};
    // int ans[3][4];
    
    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // {
    //     ans[row][col] = arr1[row][col] - arr2[row][col];
    // }
    // for(int i=0; i<3; i++)
    // for(int j=0; j<4; j++)
    // cout<<ans[i][j]<<" ";
    
    
    
    // Print row index with maximum sum
    
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // printrowmax(arr,3,4);
    
    
    
    // Print diagonal sum
    
    // int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printsumdig(matrix,3,3);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
