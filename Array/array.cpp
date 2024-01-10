// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int arr[10];
//     cout<<"Enter the values in array: "<<endl;
//     for(int i = 0; i<10; i++){
//         cin>>arr[i];
//     }

//     cout<<"Printing the values in array: "<<endl;
//     for(int i=0; i<10; i++){
//         cout<<arr[i]<<" "<<ends;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// bool find(int arr[], int size, int key){
//     for(int i =0; i<5; i++){
                                    //            //     for(int i=0; i<size; i++){
//         if(arr[i] == key){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[5]={1,3,54,87,39};
//     int size = 5;
//     cout<<"Enter the element you want to search in array: "<<endl;
//     int key;
//     cin>> key;

//     if(find(arr, size, key)){
//     cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }

// }
                                 // // // linear search flag

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5]={11,22,33,54,67};
//     int size= 5;
//     cout<<"enter the element you want to search in array: "<<endl;
//     int key;
//     cin>>key;
    
//     bool flag=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             flag =1;
//             break;
//         }
//     }

//     if(flag){
//         cout<<"present"<<endl;

//     }
//     else{
//         cout<<"not present"<<endl;
//     }
   
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1};
//     int size=20;
//     int numZero = 0;
//     int numOne = 0;
//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             numZero++;
//         }
//     }
//     for(int i=0; i<size; i++){
//         if(arr[i]==1){
//             numOne++;
//         }
//     }
//     cout<<"number of zero's"<<" "<< numZero<<endl;
//     cout<<"number of one's"<<" "<<numOne<<endl;

// }


// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={0,10,11,51,14,-1,51,41,40,40,80,-71,-81,50,221,31,50};
//     int size= 17;
//     int Maximum = INT_MIN;
//     int Minimum = INT_MAX;
//     for(int i = 0; i<17; i++){
//         if(arr[i] > Maximum){
//             Maximum = arr[i];
//         }
//     }
//      for(int i = 0; i<17; i++){
//         if(arr[i] < Minimum){
//             Minimum = arr[i];
//         }
//     }
//     cout<<"Maximum element in a array is : "<< Maximum<<endl;
//     cout<<"Minimum element in a array is : "<< Minimum<<endl;
    
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,-78,66,65,56,-65,88,-54,43,432,22,344,4545,-54,-656,56,323,234,566,66,65,454,54};
//     int size=25;                  // size should be correct
//     int maxi= INT_MIN;
//     int mini = INT_MAX;

//     for(int i =0; i<size; i++){
//         if(arr[i]> maxi){
//             maxi = arr[i];
//         }
//     }

//     for(int i =0; i<size; i++){
//         if(arr[i]< mini){
//             mini = arr[i];
//         }
//     }
//     cout<<"maximum element in an array is : "<<maxi<<endl;
//     cout<<"minimum element in an array is : "<<mini<<endl;

// }


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={0,10,11,51,14,-1,51,41,40,40,80,-71,-81,50,221,31,50};
    int size= 17;
    int start =0;
    int end = size-1;
    while(start<=end){
        if(start == end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}


// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={0,10,11,51,14,-1,51,41,40,40,80,-71,-81,50,221,31,50};
//     int size= 17;
//     int start =0;
//     int end = size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;  
//         }

//         for(int i=0; i<17; i++){
//             cout<<arr[i]<<" ";
//         }

//     }
