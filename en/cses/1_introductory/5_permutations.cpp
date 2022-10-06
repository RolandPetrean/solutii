// https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  
  if (n == 1) cout<<1;
  if (n < 4) cout<<"NO SOLUTION";
  else {
    for (ll i=2; i<=n; i+=2) cout<<i<<" ";
    for (ll i=1; i<=n; i+=2) cout<<i<<" ";
  }
}