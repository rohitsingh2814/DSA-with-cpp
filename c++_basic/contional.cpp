//if else are conditional statement in which we use logiacal and relational operator 
//else is not complusry part, it is optional
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    else if(marks>=25&&marks<=45){
        cout<<"E";
    }
    else if(marks>=45&&marks<=50){
        cout<<"D";
    }
    else if(marks>=50&&marks<=60){
        cout<<"c";
    }
    else if(marks>=60&&marks<=70){
        cout<<"B";
    }
    else if(marks>=60&&marks<=70){
        cout<<"B";
    }
   else if(marks>=70&&marks<=80){
        cout<<"B+";
    }
    else if(marks>=70&&marks<=80){
        cout<<"A";

    }
    else{
        cout<<"A+";
    }
//switch case are also use to contioanal but only for fixed value option and its default is optional.
int day;
cout<<"\nEnter the number of days: ";
cin>>day;
switch(day){
    case 1: 
    cout<<"Sunday";
    break;
    case 2: 
    cout<<"Monday";
    break;
    case 3: 
    cout<<"Tuesday";
    break;
    case 4: 
    cout<<"Wednesday";
    break;
    case 5: 
    cout<<"Thrusday";
    break;
    case 6: 
    cout<<"Friday";
    break;
    case 7: 
    cout<<"saturday";
    break;
    default: //it is optional
    cout<<"Invalid choice";

}

 


}