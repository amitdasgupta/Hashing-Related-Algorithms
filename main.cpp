#include <iostream>
#include<string>
#include<map>
#include<algorithm>
#define pp pair<char,int>
using namespace std;
void swapAndReduceSize(int * &arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
/***********code to check weather two arrays have same set or not  hashing  method*/////////////
int main()
{   vector<pair<int,int>> vector_;
    map<int,int> map_;
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        map_[a]=b;
        if(map_[a]==b&&map_[b]==a)
        {
            vector_.push_back(make_pair(a,b));
        }

    }
    for(auto it=vector_.begin();it!=vector_.end();it++)
    {
        cout<<it->first<<" "<<it->second;
    }
}
