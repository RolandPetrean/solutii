// https://www.pbinfo.ro/probleme/410/cmmdc2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> cif;
  while (n) {
    cif.push_back(n%10);
    n /= 10;
  }
  reverse(cif.begin(), cif.end());

  int a=0, b=0;
  for (int i=0; i<cif.size()/2; ++i) a = a*10+cif[i];
  for (int i=cif.size()/2+(cif.size()&1); i<cif.size(); ++i) b = b*10+cif[i];

  cout<<__gcd(a, b);
}