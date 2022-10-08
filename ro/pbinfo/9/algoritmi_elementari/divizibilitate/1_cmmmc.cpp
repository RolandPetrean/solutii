// https://www.pbinfo.ro/probleme/59/cmmmc
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  cout<<(a*b)/__gcd(a, b);
}