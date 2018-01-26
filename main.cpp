#include <iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
void swapAndReduceSize(int * &arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
/***********give an algorithm to find all pairs from set whose sum is S*///
int main()
{
  vector<pair<int,int>> vector_;
  map<int,int> map_;
  int *arr,n,k,i;
  cin>>n>>k;
  for(i=0;i<n;i++)
   {
        cin>>arr[i];
        map_[arr[i]]++;
   }
   for(int i=0;i<n;i++)
   {
       if(map_[arr[i]]!=0)
       {

           vector_.push_back(make_pair(arr[i],k-arr[i]));
           map_[arr[i]]--;
       }
   }
   for(auto it=vector_.begin();it!=vector_.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;
   }


}
