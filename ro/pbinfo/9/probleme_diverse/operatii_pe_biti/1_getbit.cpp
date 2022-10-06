// https://www.pbinfo.ro/probleme/2577/getbit
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll t;
  cin>>t;

  for (ll i=0; i<t; ++i) {
    ull n, b;
    cin>>n>>b;
    cout<<((n>>b)&1);
  }
}