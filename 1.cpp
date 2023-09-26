#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k,j;
    
    while(t--){
        cin>>k;
        vector <pair<int,int>>hel(k);
        for(int i=0;i<k;i++){
            cin>>j;
            hel[i].first=j;
            hel[i].second=i;
        }
        sort(hel.begin(),hel.end());
        for(int i=0;i<k;i++){
        hel[i].first=k-i;}
    sort(hel.begin(), hel.end(), [](auto &left, auto &right) {
    return left.second < right.second;

});
for(int i=0;i<k;i++){
        cout<<hel[i].first<<" ";
    }cout<<endl;
}
    }