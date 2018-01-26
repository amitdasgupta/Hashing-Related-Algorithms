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
/***********give an algorithm to find first non repeated character in a string brute force*/////////////
int main()
{
  string s;
  cin>>s;
  int n=s.size();
  int i=0,j;
  for(i=0;i<n-1;i++)
  {
      j=i+1;
      while(j<n&&s[i]!=s[j])
      {
          j++;
      }
      if(j==n)
      {
          cout<<s[i];
          break;
      }
  }
}
