// You are given an array A of 'n' integers. You want to choose some integers from the array subject to the condition that the number of distinct integers 
// chosen should not exceed 'k' . Your task is to maximize the sum of chosen numbers.

// Input Format
// The first line contains a single integer 't' denoting the number of test cases.
// The first line of each test case contains two space-separated integers 'n' and 'k' denoting the length of the array and the maximum number of distinct integers you can choose.
// The second line of each test case contains 'n' space-separated integers denoting the integer array A.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
  while(t--)
  {
    int n,k,s=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
      cin>>a[i];
    sort(a,a+n,greater<int>());
    // for(int i=0; i<n; i++)
    // {
    //   if(a[i]==a[i+1])
    //     c=c+1;
    // }
    
    for(int i=0; i<k; i++)
    {
      s=s+a[i];
      if(a[i]==a[i+1])
      {
        k++;
      }
    }
    cout<<s<<"\n";
  }
    return 0;
}
