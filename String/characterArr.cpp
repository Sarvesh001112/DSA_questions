#include <iostream>
#include<string.h>
using namespace std;

int getLength(char name[]) {
        int length = 0;
        int i = 0; 

        while(name[i] != '\0') {
                length++;
                i++;
        }
        return length;
}


void reverseCharArray(char name[]) {
        int i = 0;
        int n = getLength(name);
        int j = n - 1;

        while(i<=j) {
                swap(name[i], name[j]);
                i++;
                j--;
        }

}

void replaceSpaces(char sentence[ ]){
        
        int i = 0;
        int n = strlen(sentence);

        for(int i=0; i<n; i++) {
                if(sentence[i] == ' ') {
                        sentence[i] = '@';
                }
        }
}


bool checkPalindrome(char word[] ) {
        int i=0;
        int n = strlen(word);
        int j = n - 1;

        while(i <= j) {
                if(word[i] != word[j]) {
                        return false;
                }
                else {
                        i++;
                        j--;
                }
        }
        return true;
}


void convertIntoUpperCase(char arr[]) {
        int n = getLength(arr);

        for(int i=0; i<n; i++) {
                arr[i] = arr[i] -'a' + 'A';
        }
}

void convertIntoLowwerCase( char arr1[]){
        int n = strlen(arr1);
        for(int i = 0; i<n; i++ ){
                arr1[i] = arr1[i] - 'A' + 'a';
        }

}


int main() {
        
        char name[100];
        cin.getline(name,50);

        cout << "length is: " << getLength(name) << endl;
        cout << "Length is -> " << strlen(name) << endl;

        cout << "Initially: " << name << endl;
        reverseCharArray(name);
        cout << "After reversal process: " << name << endl;

        char sentence[100];
        cin.getline(sentence, 100);

        replaceSpaces(sentence);
        cout << "printing sentence " << endl << sentence << endl;


        char arr[100] ;
        cin.getline(arr, 50);
        cout << "palindrome check: " << checkPalindrome(arr);
        if(1){
                cout<<"yes is a palindrome"<<endl;
        }
        else{
                cout<<"no"<<endl;
        }


        char arr2[100] = "babbar";
        convertIntoUpperCase(arr2);
        cout << arr2 << endl;

        char lower[100] = "SHUBH";
        convertIntoLowwerCase(lower);
        cout << lower << endl;


  return 0;
}