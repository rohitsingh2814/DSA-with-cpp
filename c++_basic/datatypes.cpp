#include<bits/stdc++.h>
using namespace std;
int main(){
    //int - 4 bytes ->(-10^9 to 10^9)
    int x=6;
    // long -same as int ->(-10^12 t0 10^12)
    long y=74787;
    //long long -8 bytes ->(-10^18 to 10^18)
    long long z=7687698785875;
    //float-point values 4 bytes 
    float a=67.9;
    float b=67;//double and float also take input as integer
    cout<<"the value of b ="<<b;
    //double is used to take larger pouind values
    double c=56.9;
    cout<<"the value of c = "<<c;
    cout<<fixed<<setprecision(2)<<"the value of c = "<<c;//fixed and setpresion is used desire points value
    //char - 2 bytes- single character value in single qoute 'a'
    char ch ='5';
    cout<<"the value of char = "<<ch<<endl;
    //string-sequece of char that can be determine by index stating from 0
    string str;
    cin>>str; //this take string without space, after sapce it can be store in another string variable
    cout<<str;
    string str2;
   cin.ignore(); // clears leftover newline from buffer
    getline(cin,str2);//this take string with space but in single line
    cout<<str2;

    return 0;
}