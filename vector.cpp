#include<bits/stdc++.h>
using namespace std;
void explain_vector(){
    //vector is dynamic array 
    //the size of an array can be dynamicallly changed
    vector<int>v(5);//create 5 elements and initialized to zero
    vector<int>v1={1,2,3,4,5};
    cout<<"elments in v1: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<"\n";
    cout<<"elments in v: ";
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
        cout<<"\n";
        vector<int>n;
        n.push_back(10);
        n.push_back(20);
        n.push_back(30);
        n.emplace_back(40);//similar to pushback dynamically increse size and push
                            //ele into array ,its is faster than push
            n.push_back(50);
            cout<<"after pushing elements into n : ";
        for(int i=0;i<n.size();i++){
            cout<<n[i]<<" "; }
    cout<<"\n";
    n.pop_back();//remove last element,i.e 50
    n.pop_back();///remove last element,i.e 40
cout<<"elemts after pop() 2 times: ";
    for(int i=0;i<n.size();i++){
            cout<<n[i]<<" "; }//10,20,30
    cout<<"\n";
 n.insert(n.begin()+2,25);
    cout<<"after insertion at pos 3: ";
    for(int i=0;i<n.size();i++){
            cout<<n[i]<<" "; }

    cout<<"\n";
cout<<"elments in v1: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";}
        cout<<"\n";



            v1.erase(v1.begin()+2,v1.begin()+4);//1 2 3 4 5->1 2  5
            cout<<"after deletion of ele from 3 and 4: ";
    for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" "; }
    cout<<"\n";
   

        v1.clear();
        n.clear();
       
        cout<<"the vector is empty or not: "<<v1.empty()<<endl;//1->yes true
        cout<<"the vector is empty or not: "<<n.empty()<<endl;//1
        cout<<"the vector is empty or not: "<<v.empty();//false or 0
        cout<<"\n";
 //iterator function
 vector<int>t={9,8,7,5,4,3};
 //(i)
 cout<<"using iterator: ";
 for(vector<int>::iterator it=t.begin();it!=t.end();it++){
    cout<<*(it)<<" ";
 }// 9,8,7,5,4,3
  cout<<"\n";
//(ii)auto->auto assignation use instead of vector<int>::iterator it
cout<<"using auto: ";
for (auto it =t.begin();it!=t.end();it++){
    cout<<*(it)<<" ";
}// 9,8,7,5,4,3
 cout<<"\n";
//(iii)
cout<<"using basic for loop: ";
for(auto it:t){
    cout<<it<<" ";
}cout<<"\n";//9,8,7,5,4,3

vector<int>a(2,4);//(size,elemnt to store)
//means {4,4}
cout<<"elements os a is: ";
for(auto it:a){
    cout<<it<<" ";//4,4
}cout<<"\n";

//copy
vector<int>b(a);//elements of a is copied to b
cout<<"elements of a is copied to b: ";
for(auto it:b){
    cout<<it<<" ";//4,4
}cout<<"\n";

vector<int>c(2,100);//100,100
c.insert(c.begin(),300);//300,100,100
c.insert(c.begin()+1,2,10);//300,10,10,100,100
vector<int>copy(2,50);//50,50
c.insert(c.begin(),copy.begin(),copy.end());//50,50,300,10,10,100,100
cout<<"the elements of vector c: ";
for(auto it:c){
    cout<<it<<" ";
}
}
int main(){
    explain_vector();
    return 0;
}