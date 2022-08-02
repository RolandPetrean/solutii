// https://www.pbinfo.ro/probleme/331/afisarenumereimpare
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
  for (ll i=2*n-1; i>0; i-=2) cout<<i<<" ";
}