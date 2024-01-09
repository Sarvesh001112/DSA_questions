//                                    find unique element

// #include<bits/stdc++.h>
// using namespace std;
                                       
// int findUnique(vector<int> arr){
//     int ans = 0;
//     for(int i=0 ;i<arr.size(); i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"enter the size of Array: "<<endl;
//     cin>>n;

//     vector<int> arr(n);
//     cout<<"Enter the element in Array: "<<endl;
//     for(int i=0; i<arr.size(); i++ ){
//         cin>>arr[i];
//     }

//     int UniqueElement = findUnique(arr);
//     cout<<"Unique element in array is :"<<UniqueElement<<endl;
// //     int a = 2^3;
// //     cout<<a;
//  }



//                                          union of 2 array

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int arr[]= {1,2,3,4,5,6,7,8};
//     int sizea = 8;
//     int brr[]={11,12,13,14};
//     int sizeb=4;

//     vector<int> ans;
//     for(int i=0; i<sizea; i++){
//         ans.push_back(arr[i]);
//     }
//      for(int i=0; i<sizeb; i++){
//         ans.push_back(brr[i]);
//     }
//      for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }



//                                          intersection

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// vector<int> a{1,2,3,4,5,6,7,8,8,8,9,9};
// vector<int> b{1,2,3,7,8,9};

// vector<int> ans;
// for(int i=0; i<a.size(); i++){
//     int element = a[i];
//     for(int j=0; j<b.size(); j++){
//         if(element == b[j]){

//            b[j]=INT_MIN;

//             ans.push_back(element);
//         }
//     }
// }
// for(auto value:ans){
//     cout<<value<<" ";
// }

// }



//                                                  pair sum
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// vector<int> arr{1,2,3,4,5,6,7,8,9};
// int sum = 15;
// for(int i=0; i<arr.size(); i++){
//     int element =arr[i];
//     for(int j=0; j<arr.size(); j++){
//         if(element + arr[j] == sum){
//             cout<<"Pair Found : "<< "(" <<element<<" , "<<arr[j]<< ")"<<endl;
//         }
//     }
// }
// } 


//                                               / triplet

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// vector<int> arr{1,2,3,4,5,6,7,8,9};
// int sum = 24;
// for(int i=0; i<arr.size(); i++){
//     int element1 =arr[i];

//     for(int j=0; j<arr.size(); j++){
//         int element2 =arr[j];

//         for(int k=0; k<arr.size(); k++){
//         int element3 =arr[k];

//         if(element1 + element2 + element3 == sum){
//             cout<<"Triplet of array is: "<<" ( "<<element1<<","<<element2<<","<<element3<<")"<<endl;

//         }
//     } 
// }
// }
// }

//                                         sort 0's  and 1's

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{0,0,0, 1,1,1,0,1,1,0,0,1,0,1,0,1,0,1,0};
//     int start = 0;
//     int end = arr.size() - 1;
//     int i = 0;
//     while(i!=end){
//         if(arr[i]==0){
//             swap(arr[start],arr[i]);
//             start ++;
//             i++;
//         }
//         else{
//             swap(arr[end],arr[i]);
//             end--;
//         }
//     }
//     for(auto value :arr){
//         cout<<value<<" ";
//     }
//     return 0;
// }
















