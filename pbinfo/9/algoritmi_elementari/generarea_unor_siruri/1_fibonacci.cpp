// https://www.pbinfo.ro/probleme/255/fibonacci
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  vector<ll> fib{1, 1};
  for (ll i=0; i<min(2LL, n); i++) cout<<fib[i]<<" ";
  for (ll i=2; i<n; i++) {
    fib.push_back(fib[i-1] + fib[i-2]);
    cout<<fib[i]<<" ";
  }
}