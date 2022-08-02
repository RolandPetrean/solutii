// https://cses.fi/problemset/task/1083/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, x, sum=0;
  cin>>n;
  for (ll i=0; i<n-1; i++) {
    cin>>x;
    sum += x;
  }

  // Using Gaussian sum to find the missing number
  cout<<(n*(n+1))/2 - sum;
}