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
/***********code to find symmetric pairs in given pairs using hashing*/////////////
int main()
{   map<int,int> map_;
    int n,*arr1,*arr2,flag=0,k;
    cin>>n>>k;
    arr1=new int[n];
    arr2=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    for(int i=0;i<n;i++)
    {
        map_[arr1[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        if(map_.find(k-arr2[i])!=map_.end())
        {
            cout<<k-arr2[i]<<" "<<arr2[i];
            flag=1;
            break;
        }
    }

}
