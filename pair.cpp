//pair
#include<bits/stdc++.h>
using namespace std;
void explain_pair(){
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>q={1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int,int> arr[]={{1,5},{2,6},{3,7},{4,8},{5,1}};
    cout<<arr[0].second<<" ";
    
}
int main(){
    explain_pair();
    return 0;
}