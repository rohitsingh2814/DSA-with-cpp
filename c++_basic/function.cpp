//fuction are block of code to use multiples times when we use
//it promts modular coding
//funtion are two tyes paramirezed,unparamized
//In paramized we have two standands to pass value pass-by-refrerence or pass-by-value
#include<bits/stdc++.h>
using namespace std;

void printName(){ //unparamerized 
    cout<<"welocme rohit";
}

void greet(string name){ //paramerized with pass-by-value
    cout<<"welcome"<<" "<<name;
}

int add(int n){ //every function their return type and datatype of passing value;
    return n=n+7;
}



int subtract(int &n){ //& means refrecence, its passed address of varaiable and its effect its original value
    return n=n-2;
}


void add(int *n){ //pass_by_refrence using pointers
    *n=*n +3;
    cout<<*n;
}


int product(int x,int y=9){ //default parameter //if value is not passed at time of function call it takes default delclare value//default is only in right
    return x*y;
}


int main(){
printName();
string name="Anuj";
greet(name);
int n=7; 
cout<<add(n)<<endl;  //value inside the function//pass-by_value not change its origal value, it sends copy of parameter
cout<<n<<endl;//outside the function
cout<<subtract(n)<<endl;//inside the function and it pass_by_refrece  it changes the original value
cout<<n<<endl; //now n is changed by subtract fn
add(&n);//pass_by_refrence using pointers
cout<<product(7); //63
cout<<product(3,4); //12

}