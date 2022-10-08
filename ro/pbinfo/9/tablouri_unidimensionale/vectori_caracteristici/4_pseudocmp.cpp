// https://www.pbinfo.ro/probleme/4084/pseudocmp
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("pseudocmp.in");
ofstream fout("pseudocmp.out");

int sumcif(int n) {
  int c=0;
  while (n>0) {
    c += n%10;
    n /= 10;
  }
  return c;
}

int main() {
  int t, n;
  fin>>t>>n;

  vector<int> a(n);
  for (int i=0; i<n; ++i) fin>>a[i];
  sort(a.begin(), a.end());

  if (t==1) {
    for (int i=1; i<n; ++i) {
      if (sumcif(a[i])<sumcif(a[i-1])) {
        fout<<a[i-1]<<" "<<a[i];
        return 0;
      }
    }
    fout<<-1;
    return 0;
  }

  array<int,60> s{};
  long long p=0;
  for (int i=0; i<n; ++i) {
    int c=sumcif(a[i]);
    for (int j=c+1; j<=54; ++j) p += s[j];
    ++s[c];
  }
  fout<<p;
}