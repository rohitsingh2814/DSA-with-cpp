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
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(0); //{0,1,2}
    dq.emplace_front(4); //{4,0,1,2}
    
    dq.pop_back(); //{4,0,1}
    dq.pop_front(); //{0,1}
    cout<<dq.back();
    cout<<dq.front();
  //all others function are same as vector
    //begin ,end,rend,rbegin,clear,erase,insert,swap,empty
}
void explainstack(){
      stack<int>st; //LIFO
      st.push(3); //{3}
      st.push(4); //{4,3}
      st.push(5); //{5,4,3}
      cout<<st.size(); //3
      st.emplace(6); //{6,5,4,3}
     cout<<st.top(); //st.top() is print top element is stack **st[2] is invalid** //6
      st.pop(); //delete top element {5,4,3}
      cout<<st.empty();
      stack<int>st1,st2;
      st1.swap(st2);

}
void explainqueue(){
   queue<int>q;  //FIFO
   q.push(2); //{2}
   q.push(3); //{2,3}
   q.emplace(4); //{2,3,4}
   cout<<q.front(); //2
   cout<<q.back();//4
   q.pop(); //{3,4}
   cout<<q.size();
//swap simillar to stack

}
void explainpriporityQ(){
   priority_queue<int>pq; //map heap
   pq.push(5);
   pq.push(3);
   pq.push(4);
   pq.emplace(8); //{8,5,4,3}
   cout<<pq.top(); //8
   pq.pop();
   cout<<pq.top(); //5
   cout<<pq.size();
   cout<<pq.empty();
   priority_queue<int,vector<int>,greater<int>>pq_min; //min heap
   pq_min.push(3);
   pq_min.push(5);
   pq_min.push(7);
   pq_min.push(1); //{1,3,5,7}
   cout<<pq_min.top(); //1
   //push- 0(log n) others- 0(1)
}
void explainset(){
   // set stores unique and sorted elements in ascending order by default
    set<int> st;

    // Inserting elements
    st.insert(5);
    st.emplace(3);   // emplace is similar to insert but slightly faster
    st.insert(4);
    st.insert(2);
    // Current set: {2, 3, 4, 5}

    // Common functions (same as vector)
    // st.begin(), st.end(), st.rbegin(), st.rend(), st.size(), st.empty(), st.swap()

    // Finding an element
    auto it = st.find(5); // returns iterator to element if found, else st.end()
    if (it != st.end())
        cout << "Found: " << *it << endl;
    else
        cout << "Not found\n";

    // Erasing an element
    st.erase(5);  // removes 5
    // Set after erasing: {2, 3, 4}

    // Trying to find again
    auto r = st.find(5);
    if (r != st.end())
        cout << "Found: " << *r << endl;
    else
        cout << "5 not found after erase\n";  // safer than directly doing *(r)
    
    auto it5=st.find(1);
    st.erase(it); //in erase we also pass the itreator
    auto it1=st.find(1);
    auto it2=st.find(1); 
    st.erase(it1,it2); //[first,last]
    

    auto it3=st.lower_bound(2);
    auto it4=st.upper_bound(3); //video in description
    
}
void explainmultiset(){
// everthing simillar to set but only difference is it store duplicate values
multiset<int>ms;
ms.insert(2);
ms.insert(3);
ms.insert(2);
ms.emplace(4);
for(auto i:ms){
    cout<<i;
}
int cnt =ms.count(1);
cout<<cnt;
ms.erase(1); //erase all one
ms.erase(ms.find(1));//erase only 1 one;
ms.erase(ms.find(1),ms.find(5));

}
void explainUset(){
    //not sorted but unique, all operation sililar to set but upper and lower bond not work
    //all time its o(1) but o(n) sometime worstcase
 unordered_set<int>us;
     // all other fn similar to set

}
void explainMap(){
//    store key and values pair , key is unique and store in sorted manner
    map<int,int>mp;
    mp[0]=3;
    mp[1]=2; 
    mp.insert({2,3});
    mp.emplace(3,3);
   for(auto it :mp){
    cout<<it.first<<" : "<<it.second<<"\n";
   }
   mp[0] = 5; //insert key with value 5
   mp.at(1) = 6; //update key 1 with new value
for(auto it :mp){
    cout<<it.first<<" : "<<it.second<<"\n";
   }

cout<<mp[0]; //5
auto it =mp.find(3);
cout<<(*it).second;
map<int,pair<int,int>>mp1;
map<pair<int,int>,int>mp2;
mp2[{1,2}]=3;
auto it2 = mp.upper_bound(3);

}
void explainmultimap(){
    multimap<int,int>map;
    //everthing simillar to map and multiple keys store ,duplicate keys
    //map[keys] not used
}
void explain_unorderedmap(){
 //key is unique but not sorted manner
 //same as set and unorderedset differecne
}
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second)return true;
    if(p1.second>p2.second)return false;
    if(p1.first>p2.first)return true;
    return false;

     
}
void expalinExtra(){
    vector<int>a;
    int arr[]={1,3,5,7,8};
    int n=5;
    sort(arr,arr+4);
    sort(arr+2,arr+4);
    sort(a.begin(),a.end());
    sort(arr,arr+n,greater<int>());
    pair<int,int> ar[]={{1,2},{2,4},{4,5},{4,6},{6,7}};
    sort(ar,ar+n,comp);
    for(int i=0;i<n;i++){
        cout<<ar[i].first<<":"<<ar[i].second;

    }
    
    cout<<__builtin_popcount(n); //count the set bit in 32 bit
    long long m=4543526246;
     cout<<__builtin_popcountll(n); //for long long
    string str="123";
    sort(str.begin(),str.end());
    do{
        cout<<str<<" ";
    }
    while(next_permutation(str.begin(),str.end()));

    int maxi = *(max_element(arr,arr+n));
    cout<<maxi;
    


}
int main(){
    //explainpair();
    //explainvector();
    //explainlist();
   // explaindeque();
   //explainstack();
   //explainqueue();
   //explainpriporityQ();
    // explainset();
    // explainmultiset();
    // explainUset();
    //explainMap();
    expalinExtra();
}