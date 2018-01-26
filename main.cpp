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
/***********give an algorithm to remove specified characters from the given string*/////////////
int main()
{
  int arr[256],i;
  for(i=0;i<257;i++)
    arr[i]=0;
  string s,p;
  cin>>s>>p;
  int n=p.size();
  for(int i=0;i<n;i++)
  {
      arr[p[i]]++;
  }
  n=s.size();
  i=0;
  while(i<n)
  {
      if(arr[s[i]]!=0)
      {
          /*** add this line if multiple characters are repeated in pattern
          arr[s[i]]--;*/////
          s[i]=s[n-1];
          n--;
      }
      else
        i++;
  }
  s.resize(n);
  cout<<s;
}
