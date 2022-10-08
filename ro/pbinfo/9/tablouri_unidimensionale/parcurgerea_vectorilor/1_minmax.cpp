// https://www.pbinfo.ro/probleme/82/minmax
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

ifstream fin("minmax.in");
ofstream fout("minmax.out");

int main() {
  int n;
  fin>>n;

  int mini=INT_MAX, maxi=INT_MIN;
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    mini = min(mini, x);
    maxi = max(maxi, x);
  }
  fout<<mini<<" "<<maxi;
}