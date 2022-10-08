// https://www.pbinfo.ro/probleme/58/cmmdc
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  if (a == 0 && b == 0) cout<<-1;
  else cout<<__gcd(a, b);
}