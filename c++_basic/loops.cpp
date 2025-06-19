//loops are use iterate the values multiple time
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        cout<<"rohit"<<endl;
    }
    int i=0;
    while(i<5){
        cout<<"i= "<<i<<endl;
        i++;
    }
    do{ //execute atleast one time
        cout<<i<<endl;
        i++;
    }
    while(i<5);
//     for(;;){ //infinite loop

//      }
int j=6;
for(;j<10;j++){
    cout<<j<<endl;  //you can skip anythig and add it block
}
for(int i=0,j=10;i<j;j--,i++){
    cout<<"i = "<<i<<" and j= "<<j<<endl;
}
}