// https://www.pbinfo.ro/probleme/2708/verifparitate
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  for (ll i=0; i<n; ++i) {
    ull x;
    cin>>x;
    cout<<(x&1)<<" ";
  }
}