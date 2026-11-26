#include<bits/stdc++.h>//include all header files like,iostream,math,string etc
using namespace std;
void display(){
    cout<<"naveen is built different"<<endl;
}
int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    display();
    cout<<"enter the values of x and y: "<<endl;
    cin>>x>>y;
    //display();
    int s =sum(x,y);
    cout<<s;
    return 0;
}