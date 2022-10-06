// https://www.pbinfo.ro/probleme/1255/lipsa
#include <bits/stdc++.h>
using namespace std;

ifstream fin("lipsa.in");
ofstream fout("lipsa.out");

int main() {
  int n;
  fin>>n;

  long long s=0;
  for (int i=1; i<=n; ++i) s += i;
  for (int i=1; i<n; ++i) {
    int x;
    fin>>x;
    s -= x;
  }
  fout<<s;
}