// https://www.pbinfo.ro/probleme/1892/snorocos
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

  if (n%2==0) {
    cout<<"NU ESTE NOROCOS";
    return 0;
  }
  for (ll i=0; i<n; ++i) {
    cout<<(n+1)/2+i<<" ";
  }
}