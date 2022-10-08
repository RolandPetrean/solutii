// https://cses.fi/problemset/task/1083/
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x, sum=0;
  cin>>n;
  for (int i=0; i<n-1; i++) {
    cin>>x;
    sum += x;
  }

  // Using Gaussian sum to find the missing number
  cout<<(n*(n+1))/2 - sum;
}