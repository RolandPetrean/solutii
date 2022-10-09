// https://www.pbinfo.ro/probleme/86/halfsort
#include <bits/stdc++.h>
using namespace std;

ifstream fin("halfsort.in");
ofstream fout("halfsort.out");

int main() {
  int n;
  fin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) fin>>v[i];
  sort(v.begin(), v.begin()+v.size()/2);
  sort(v.begin()+v.size()/2, v.end(), greater<int>());

  for (int x:v) fout<<x<<" ";
}