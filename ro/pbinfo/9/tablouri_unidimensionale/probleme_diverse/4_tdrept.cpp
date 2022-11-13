// https://www.pbinfo.ro/probleme/1209/tdrept
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("tdrept.in");
ofstream fout("tdrept.out");

const int MAXC=100005;
const int MOD=666013;

long long lin[MAXC], col[MAXC];

int main() {
  int n;
  fin>>n;

  vector<pair<int,int>> puncte;
  for (int i=0; i<n; ++i) {
    int x, y;
    fin>>x>>y;
    ++lin[x]; ++col[y];
    puncte.push_back({x,y});
  }

  int s=0;
  for (pair<int,int> p:puncte) {
    int x=p.first, y=p.second;
    s = ((long long)s+(lin[x]-1) * (col[y]-1))%MOD;
  }

  fout<<s;
}