// https://www.pbinfo.ro/probleme/164/halfsort2
#include <bits/stdc++.h>
using namespace std;

ifstream fin("halfsort2.in");
ofstream fout("halfsort2.out");

int main() {
  int n;
  fin>>n;

  vector<int> v1, v2;
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    if (i&1) v1.push_back(x);
    else v2.push_back(x);
  }
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end(), greater<int>());

  for (int i=0; i<n; ++i) {
    if (i&1) fout<<v1[i/2]<<" ";
    else fout<<v2[i/2]<<" ";
  }
}