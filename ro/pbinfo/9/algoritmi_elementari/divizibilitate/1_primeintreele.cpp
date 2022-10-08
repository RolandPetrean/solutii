// https://www.pbinfo.ro/probleme/60/primeintreele
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  if (__gcd(a, b) == 1) cout<<"PIE";
  else cout<<"NOPIE";
}