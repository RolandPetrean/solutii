// https://www.pbinfo.ro/probleme/282/pozmax
#include <bits/stdc++.h>
using namespace std;

ifstream fin("pozmax.in");
ofstream fout("pozmax.out");

int main() {
  int n;
  fin>>n;

  double maxi=INT_MIN;
  int p=0, u=0;
  for (int i=1; i<=n; ++i) {
    double x;
    fin>>x;

    if (x>maxi) {
      maxi = x;
      p = i;
      u = i;
    } else if (x==maxi) u = i;
  }
  fout<<p<<" "<<u;
}