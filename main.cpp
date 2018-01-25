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
/***********code to check weather two arrays have same set or not  sorting  method*/////////////
int main()
{   map<int,int> map_;
    int n,*arr1,*arr2,i,flag=1;
    cin>>n;
    arr1=new int[n];
    arr2=new int[n];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(i=0;i<n;i++)
        cin>>arr2[i];
    for(i=0;i<n;i++)
        {
            map_[arr1[i]]++;

        }
    for(i=0;i<n;i++)
        {
            map_[arr2[i]]--;
        }
    for(auto it=map_.begin();it!=map_.end();it++)
    {
        if(it->second!=0)
            flag=0;
    }
    if(!flag)
        cout<<"no";
    else
        cout<<"yes";
}
