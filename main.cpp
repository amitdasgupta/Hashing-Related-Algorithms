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
/***********give an algorithm to find first non repeated character in a string*/////////////
int main()
{
  string s;
  map<char,int> map_;
  cin>>s;
  int n=s.size();
  for(int i=0;i<n;i++)
  {
      if(map_[s[i]]!=0)
      {
          map_[s[i]]++;
      }
      else
        map_[s[i]]=1;
  }
  for(int i=0;i<n;i++)
  {
      if(map_[s[i]]==1)
      {
          cout<<s[i];
          break;
      }
  }
}
