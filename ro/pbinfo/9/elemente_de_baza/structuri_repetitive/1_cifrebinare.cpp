// https://www.pbinfo.ro/probleme/122/cifrebinare
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  if (__builtin_popcount(a) > __builtin_popcount(b)) cout<<a;
  else cout<<b;
}