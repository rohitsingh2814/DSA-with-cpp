//array are use to store a mutiple values of same datatypes in continous memory location.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={3,4,5,6,7};
    cout<<arr[2];
    int arr1[]={4,5,5}; //size automatically assign; 
    int arr2[6]={}; //all index store a zero value otherwise it store garbage value;
    arr2[3]=5; //reaasing the value;
    int len=sizeof(arr2)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        cout<<arr2[i]<<" ";
    }
    int arr3[5];
    for(int i=0 ;i<5;i++){ //user input assign
        cin>>arr[i];
    }
    //string =are sequece of chracters
    string str="rohit";
    cout<<str[2]; //string also have index staring from zero;
    cout<<str.size(); //size() length of string
    str[0]='m'; //reassign or modify the string //effect the original string also
    cout<<str;



}