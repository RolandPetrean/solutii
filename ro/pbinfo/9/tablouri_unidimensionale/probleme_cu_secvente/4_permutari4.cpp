// https://www.pbinfo.ro/probleme/2939/permutari4
#include <bits/stdc++.h>
using namespace std;

ifstream fin("permutari4.in");
ofstream fout("permutari4.out");

int main() {
  int n;
  fin>>n;

  vector<int> poz(n);
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    --x;
    poz[x] = i;
  }

  int cnt=0, mini=n, maxi=0;
  for (int i=0; i<n; ++i) {
    mini = min(mini, poz[i]);
    maxi = max(maxi, poz[i]);
    if (maxi-mini==i) ++cnt;
  }
  fout<<cnt;
}