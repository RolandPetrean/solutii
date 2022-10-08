// https://www.pbinfo.ro/probleme/3610/urm00
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  if (n%100 == 0) cout<<n;
  else cout<<n+100-n%100;
}