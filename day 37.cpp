
// #include <iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
    // vector<int>v;
    // vector<int>v1(5,1);
    
    // cout<<"Size of v:"<<v.size()<<endl;
    //  cout<<"capacity of v:"<<v.capacity()<<endl;
    //  v.push_back(2);
    //  v.push_back(5);
    //  v.push_back(10);
    //  cout<<"Size of v:"<<v.size()<<endl;
    //  cout<<"capacity of v:"<<v.capacity()<<endl;
     
     
    //  v[1] = 205;
    //  cout<<"Size of v1:"<<v1.size()<<endl;
    //  cout<<"capacity of v1:"<<v1.capacity()<<endl;
     
     
    //  v1.push_back(8);
    //  cout<<"Size of v1:"<<v1.size()<<endl;
    //  cout<<"capacity of v1:"<<v1.capacity()<<endl;
     
     
    //  vector<int>v3={1,2,3,4,5};
    //  cout<<v3.size();
    
    
    
    
    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(5);
    // vnew.push_back(6);
    // vnew.push_back(2);
    // vnew.push_back(90);
    // vnew.pop_back();
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
    
    
    // vnew.erase(vnew.begin() + 1);
    //  cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"size of vnew: "<<vnew.capacity()<<endl;
    
     
    // for(int i=0; i<vnew.size(); i++)
    // cout<<vnew[i]<<endl;
    
    
    // vnew.insert(vnew.begin()+1,50);
    // cout<<endl;
    // for(int i=0; i<vnew.size(); i++)
    // cout<<vnew[i]<<endl;
    // cout<<endl;
    
    
    // vnew[1] = 37;
    // for(int i=0; i<vnew.size(); i++)
    // cout<<vnew[i]<<" ";
    // cout<<endl;
    // cout<<endl;
    
    
    // vnew.clear();
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"size of vnew: "<<vnew.capacity()<<endl;
    
    
    
    // vector<int>arr;
    // arr.push_back(1);
    // arr.push_back(3);
    // arr.push_back(5);
    // arr.push_back(78);
    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr.back()<<endl;
    
    // vector<int>a;
    // a = arr;
    // cout<<a.size();
    
    
    
    // for(auto it=arr.begin(); it!=arr.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    
    // for(auto i: arr)
    // cout<<i<<" ";
    
    
    
    
    // vector<int>ans;
    // ans.push_back(4);
    // ans.push_back(7);
    // ans.push_back(90);
    // ans.push_back(23);
    // ans.push_back(690);
    
    // sort(ans.begin(),ans.end());
    // for(int i=0; i<ans.size(); i++)
    // cout<<ans[i]<<" ";
    // cout<<endl;
    
    
    //  sort(ans.rbegin(),ans.rend());
    // for(int i=0; i<ans.size(); i++)
    // cout<<ans[i]<<" ";
    
    
    // cout<<binary_search(ans.begin(), ans.end(), 4)<<endl;
    
    
    // cout<<find(ans.begin(), ans.end(), 90) - ans.begin()<<endl;
    
     
//     return 0;
// }


// ------------------------- practice Question -------------------------------------------------------------

// 1.How to find the number of Occurance of an element in a vector. 
// You need to use STL here.


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {


//     vector<int> numbers = {1, 2, 3, 4, 2, 5, 2};

//     int element_to_count = 2; 

//     int count_value = count(numbers.begin(), numbers.end(), element_to_count);

//     cout << "The element " << element_to_count << " appears " << count_value << " times in the vector." << endl;

//     return 0;
// }




// 2.How to find maximum and minimum elements from the vector. USE STL here.


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

//     auto max = max_element(numbers.begin(), numbers.end());

//     auto min = min_element(numbers.begin(), numbers.end());

//     cout << "Maximum element: " << *max << endl;
//     cout << "Minimum element: " << *min << endl;

//     return 0;
// }



// 3.Find Lower bound and Upper Bound of a given element in a sorted vector. 
// USE STL here to find them.


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<int> sortedVector = {1, 2, 2, 2, 3, 4, 5, 6, 6, 7};

//     int elementToFind = 2;


//     auto lower = lower_bound(sortedVector.begin(), sortedVector.end(), elementToFind);


//     auto upper = upper_bound(sortedVector.begin(), sortedVector.end(), elementToFind);

//     cout << "Lower bound of " << elementToFind << " is at index: " << (lower - sortedVector.begin()) << endl;
//     cout << "Upper bound of " << elementToFind << " is at index: " << (upper - sortedVector.begin()) << endl;

//     return 0;
// }



// 4.How to pass a vector to a function. Write a small code for it.

// #include <iostream>
// #include <vector>

// using namespace std;

// void printVector(const vector<int>& myVector) {
//     for (const int& element : myVector) {
//         cout << element << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> numbers = {1, 2, 3, 4, 5};

//     printVector(numbers);

//     return 0;
// }


