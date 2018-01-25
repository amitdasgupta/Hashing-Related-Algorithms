#include <iostream>
#include<string>
#include<map>
#include<algorithm>
#define pp pair<char,int>
using namespace std;
/***********brute force method to remove duplicates from string*/////////////
int main()
{
    map<char,int> map_;
    string a;
    cin>>a;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(map_.find(a[i])==map_.end())
            map_.insert(pp(a[i],i));
    }
    map<char,int>::iterator it=map_.begin();
    for(;it!=map_.end();it++)
    {
         cout<<it->first;
    }
}
