// https://www.pbinfo.ro/probleme/2624/invbits
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

  ll k=log2(n);
  k = 1<<k;
  cout<<(n^(k|(k-1)));
}