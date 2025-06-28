#include <bits/stdc++.h>
using namespace std;
void explainpair(){
     //pairs are under utility class
    pair<int,int> p={1,2};
    cout<<p.first;
    //pair is like a datatype in which we combine two primitive data types.
    pair<int,string> p1={1,"rohit"};
    cout<<p1.second;
    //we also nested pair
    pair<int,pair<int,int>> p2={2,{3,4}};
    cout<<p2.second.first;
    //we can also create array of pairs;
    pair<int,int> arr[]={{2,3},{4,5},{6,6}};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    cout<<arr[0].first;
}



void explainvector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2); //same as push back;

    vector<pair<int,int>>v1; //vector of pairs
    v1.push_back({2,3});
    v1.emplace_back(2,3);

    vector<int>vec(5); //vector of size 5
    vector<int>v2(5,100); //size five and 100 default value in all position
    vector<int>v3={1,2,3,4,5,6}; //intallizer list
    vector<int>::iterator it=v3.begin(); //iterator store the memory storage
    cout<< *(it); //print first element of vector
    it++;
    cout<< *(it);//print second element;
   //vector<int>::iterator it=v3.end(); //types of iterator
//    vector<int>::iterator it=v3.rbegin();
//    vector<int>::iterator it=v3.rend();
cout<<v3[1]<<"  " <<v.at(1);
cout<<v3.back(); //print last element
cout<<"\n";
for(vector<int>::iterator it=v3.begin(); it!=v3.end();it++){
     cout<<" "<<*(it);
}
for(auto it=v3.begin();it!=v3.end();it++){ //auto detect datatypes automatic (auto str ="rohit";)
    cout<<*(it);
}
for(auto it :v3){
    cout<<" "<<it;
}
for(int i:v3){
    cout<<" "<<i;
}
//v3.erase(v3.begin()+1); //delete second elment
v3.erase(v3.begin(),v3.begin()+3); //{4,5,6} //last element exclude
for(int i=0;i<v3.size();i++){
    cout<<v3[i];
}
v3.pop_back(); //delete last element
v3.erase(find(v3.begin(),v3.end(),5));
for(int i:v3){
    cout<<" "<<i;
}
//insert function
vector<int>v4(2,100); //{100,100}
v4.insert(v4.begin(),300); //{300,100,100}
v4.insert(v4.begin()+1,2,10); //{300,10,10,100,100}
vector<int>copy(2,50); //{50,50}
v4.insert(v4.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

for(int i:v4){
    cout<<" "<<i;
}
cout<<"\n"<<"size of v4: "<<v4.size();
//swap
// v1-> {1,2}
// v2->{3,4}
// v1.swap(v2); v1-> {3,4} v2->{1,2}
v4.clear(); //erase intire vector
cout<<v4.empty(); //if vector is empty return "0" else return "1"

}

void explainlist(){
    list<int>li(2,50); //{50,50}
    li.push_back(60); //{50,50,60}
    li.emplace_back(70); //{50,50,60,70}
    li.push_front(20); //{20,50,50,60,70}// this is only extra feature of list compare to vector in vector we use insert for front and take more time 
    li.emplace_front(40); //{40,20,50,50,60,70}
    //all others function are same as vector
    //begin ,end,rend,rbegin,clear,erase,insert,swap,empty
    for(auto i:li){
        cout<<i<<" ";
    }

}

void explaindeque(){

}
int main(){
    explainpair();
    explainvector();
    explainlist();
    explaindeque();

}