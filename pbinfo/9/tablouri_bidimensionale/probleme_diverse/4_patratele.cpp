// https://www.pbinfo.ro/probleme/4085/patratele
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("patratele.in");
ofstream fout("patratele.out");

const int su=(1<<0), dr=(1<<1), jo=(1<<2), st=(1<<3);

bool validDir(int i, int j, int n, int m, pair<int,int> d) {
  return i+d.first < n && i+d.first >= 0 && j+d.second < m && j+d.second >= 0;
}

int calc(int n, int m, int t, vector<vector<int>> f) {
  vector<vector<int>> down(n, vector<int>(m)), right(n, vector<int>(m)), up(n, vector<int>(m)), left(n, vector<int>(m));
  for (int i=0; i<n; ++i) { // down/up
    for (int j=0; j<m; ++j) {
      if (f[i][j]&jo) {
        if (validDir(i, j, n, m, {0,-1})) down[i][j] = down[i][j-1];
        ++down[i][j];
      }
      if (f[i][j]&su) {
        if (validDir(i, j, n, m, {0,-1})) up[i][j] = up[i][j-1];
        ++up[i][j];
      }
    }
  }
  for (int i=0; i<n; ++i) { // right/left
    for (int j=0; j<m; ++j) {
      if (f[i][j]&dr) {
        if (validDir(i, j, n, m, {-1,0})) right[i][j] = right[i-1][j];
        ++right[i][j];
      }
      if (f[i][j]&st) {
        if (validDir(i, j, n, m, {-1,0})) left[i][j] = left[i-1][j];
        ++left[i][j];
      }
    }
  }

  int maxp=min(n,m), total=0;
  for (int p=0; p<maxp; ++p) {
    int ptotal=0;
    for (int i=0; i<n-p; ++i) {
      for (int j=0; j<m-p; ++j) {
        if (left[i+p][j]>p && up[i][j+p] > p && right[i+p][j+p] > p && down[i+p][j+p] > p) ++ptotal;
      }
    }
    if (t==2 && ptotal>0) fout<<p+1<<" "<<ptotal<<endl;
    total += ptotal;
  }
  if (t==1) fout<<total;
  return total;
}

int main() {
  int n, m, t;
  fin>>n>>m>>t;

  vector<vector<int>> f(n, vector<int>(m));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) fin>>f[i][j];
  }
  
  if (t==1 || t==2) {
    calc(n, m, t, f);
    return 0;
  }

  int total=calc(n,m,t,f);
  array<pair<int,int>,4> dir{{{-1,0}, {0,1}, {1,0}, {0,-1}}};
  pair<int, pair<int,pair<int,int>>> maxtotal{0, {0,{0,0}}};
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      for (int d=0; d<4; ++d) {
        pair<int,int> w=dir[d];
        int o=(d+2)%4;

        if (f[i][j]&(1<<d)) continue;
        f[i][j] += (1<<d);
        if (validDir(i,j,n,m,w)) f[i+w.first][j+w.second] += (1<<o);

        int newtotal=calc(n, m, t, f);
        if (newtotal > maxtotal.first) maxtotal = {newtotal, {i, {j, d}}};

        f[i][j] -= (1<<d);
        if (validDir(i,j,n,m,w)) f[i+w.first][j+w.second] -= (1<<o);
      }
    }
  }

  if (maxtotal.first <= total) fout<<"0\n0 0 NU";
  else {
    int d=maxtotal.second.second.second;
    fout<<maxtotal.first<<endl<<maxtotal.second.first+1<<" "<<maxtotal.second.second.first+1<<" ";
    if (d==0) fout<<"SUS";
    else if (d==1) fout<<"DREAPTA";
    else if (d==2) fout<<"JOS";
    else if (d==3) fout<<"STANGA";
  }
}