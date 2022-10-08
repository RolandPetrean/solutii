// https://www.pbinfo.ro/probleme/59/cmmmc
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  cout<<(a*b)/__gcd(a, b);
}