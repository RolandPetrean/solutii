// https://www.varena.ro/problema/treicc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("treicc.in");
ofstream fout("treicc.out");

bool cifcc(int n) {
  int p=-1, s=0;
  while (n > 0 && s<2) {
    if (n%10%2 == p) ++s;
    else {
      p = n%10%2;
      s = 0;
    }
    n /= 10;
  }
  if (s >= 2) return true;
  return false;
}

int main() {
  int n,k;
  fin>>n>>k;

  vector<int> a(k);
  for (int i=0; i<k; ++i) fin>>a[i];

  int ai=0, j=1;
  for (int i=pow(10,n-1); i<pow(10,n); ++i) {
    if (cifcc(i)) continue;
    if (a[ai] == j) {
      fout<<i<<" ";
      ++ai;
    }
    ++j;
  }
}