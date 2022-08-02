// https://www.pbinfo.ro/probleme/10/suma-cifrelor
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll s=0;
  while (n) {
    s += n%10;
    n /= 10;
  }
  cout<<s;
}