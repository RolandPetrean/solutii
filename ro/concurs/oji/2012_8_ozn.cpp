// https://www.pbinfo.ro/probleme/1071/ozn
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("ozn.in");
ofstream fout("ozn.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> c(2000002);
  for (int i=0; i<n; ++i) {
    int x1, y1, x2, y2, nr;
    fin>>x1>>y1>>x2>>y2>>nr;
    c[x1] += nr;
    c[x2+1] -= nr;
  }
  
  for (int i=1; i<c.size(); ++i) c[i] += c[i-1];

  for (int i=0; i<k; ++i) {
    int a;
    fin>>a;
    fout<<c[a]<<endl;
  }
}