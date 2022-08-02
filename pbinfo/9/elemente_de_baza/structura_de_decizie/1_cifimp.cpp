// https://www.pbinfo.ro/probleme/452/cifimp
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

  ll s=0;
  while (n>0) {
    if (n%10&1) ++s;
    n /= 10;
  }
  cout<<s;
}