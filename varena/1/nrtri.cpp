// https://www.varena.ro/problema/nrtri
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("nrtri.in");
ofstream fout("nrtri.out");

int main() {
  int n;
  fin>>n;

  vector<int> b(n);
  for (int i=0; i<n; ++i) fin>>b[i];
  sort(b.begin(), b.end());

  int t=0;
  for (int i=0; i<n; ++i) {
    int k=i+2;
    for (int j=i+1; j<n; ++j) {
      while (b[i]+b[j]>b[k] && k<n) ++k;
      if (k > j) t += k-j-1;
    }
  }
  fout<<t;
}