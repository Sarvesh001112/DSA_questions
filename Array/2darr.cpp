#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][3];
    int row = 4;
    int col = 3;
    
    cout<<"enter vales: "<<endl;
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"given 2d array is: "<<endl;
     for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
#include<bits/stdc++.h>
using namespace std;

void PrintRowSum(int arr[][3], int row, int col){
    cout<<"Printing Row Sum "<<endl;
    for(int i=0; i<row; i++){
        int sum= 0;
        for (int j=0; j<col; j++){
            sum= sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void PrintColSum(int arr[][3], int row, int col){
    cout<<"Printing Col Sum "<<endl;
    for(int i=0; i<row; i++){
        int sum= 0;
        for (int j=0; j<col; j++){
            sum= sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}

                              bool findKey(int arr[][3], int row, int col, int key){
                                cout<<"Printing Col Sum "<<endl;
                                for(int i=0; i<row; i++){
                                    for (int j=0; j<col; j++){
                                        if(arr[i][j] == key){
                                            return true;
                                        }
                                    }
                                }
                                return false;
                            }
int findMax(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
            
        }
    }
    return maxi;
}

int findMin(int arr[][3], int row, int col){

    int mini = INT_MAX;
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
            
        }
    }
    return mini;
}

void Transpose(int arr[][3], int row, int col , int transposeArr[][3]){
    for(int i=0; i<row; i++){
        int sum= 0;
        for (int j=0; j<col; j++){
            transposeArr[j][i] = arr[i][j];
        }
    }
}
void PrintArray(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3];
    int row = 3;
    int col = 3;
    // int key;
    // cout<<"enter key : ";
    // cin>>key;
    
    cout<<"enter vales: "<<endl;
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"given 2d array is: "<<endl;
     for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // PrintRowSum(arr,row,col);
    // PrintColSum(arr,row,col);
                        // cout<<"Finding Given Key: "<<" ";
                        // if(findKey(arr, row, col, key)){
                        //     cout<<"Found in array";
                        // }
                        // else{
                        //     cout<<"Not Found in array";
                        // }

    // cout<<"MAXIMUM ELEMENT IN AN ARRAY IS: "<<findMax(arr,row,col);
    // cout<<"MINIMUM ELEMENT IN AN ARRAY IS: "<<findMin(arr,row,col);

   cout<<"Array before transpose: "<<" ";
    PrintArray(arr, row, col);
    int transposeArr[3][3];
    Transpose(arr, row, col, transposeArr);
    cout<<"Array after transpose: "<<endl;
    PrintArray(transposeArr, row, col);


return 0;
}