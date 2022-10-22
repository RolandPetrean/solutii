// https://www.varena.ro/problema/divsimul
#include <bits/stdc++.h>
using namespace std;

ifstream fin("divsimul.in");
ofstream fout("divsimul.out");

bool chk(int n, vector<int>& v2) {
  bool ok=true;
  for (int i=0; i<v2.size() && ok; ++i) {
    if (n%v2[i]!=0) ok = false;
  }
  return ok;
}

int main() {
  int n;
  fin>>n;

  vector<int> v1(n), v2(n);
  for (int i=0; i<n; ++i) fin>>v1[i];
  for (int i=0; i<n; ++i) fin>>v2[i];

  int v1gcd=v1[0];
  for (int i=1; i<n; ++i) v1gcd = __gcd(v1gcd, v1[i]);
  
  int cnt=0;
  for (int i=1; i*i<=v1gcd; ++i) {
    if (v1gcd%i==0) {
      cnt += chk(i, v2);
      if (v1gcd/i!=i) cnt += chk(v1gcd/i, v2);
    }
  }

  fout<<cnt;
}