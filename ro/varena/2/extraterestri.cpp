// https://www.varena.ro/problema/extraterestri
// 60p
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("extraterestri.in");
ofstream fout("extraterestri.out");

int c[2000001];

int main() {
  int n, k;
  fin>>n>>k;

  for (int i=0; i<n; ++i) {
    int x1, y1, x2, y2, nr;
    fin>>x1>>y1>>x2>>y2>>nr;
    c[x1] += nr;
    c[x2+1] -= nr;
  }
  
  int maxi=0;
  for (int i=0; i<k; ++i) {
    int a;
    fin>>a;
    if (a>maxi) {
      for (int j=maxi+1; j<=a; ++j) c[j] += c[j-1];
      maxi = a;
    }
    fout<<c[a]<<endl;
  }
}