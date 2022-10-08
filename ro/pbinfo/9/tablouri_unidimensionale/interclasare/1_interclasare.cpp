// https://www.pbinfo.ro/probleme/241/interclasare
#include <bits/stdc++.h>
using namespace std;


ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

int main() {
  long long n, m;
  fin>>n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) fin>>a[i];
  fin>>m;
  vector<long long> b(m), c;
  for (int i=0; i<m; i++) fin>>b[i];

  long long i=0, j=0;
  while (i<n && j<m) {
    if (a[i] < b[j]) c.push_back(a[i++]);
    else c.push_back(b[j++]);
  }
  while (i < n) c.push_back(a[i++]);
  while (j < m) c.push_back(b[j++]);

  for (int i=0; i<n+m; i++) {
    if (i>0 && i%10==0) fout<<endl;
    fout<<c[i]<<" ";
  }
}