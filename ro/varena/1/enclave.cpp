// https://www.varena.ro/problema/enclave
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("enclave.in");
ofstream fout("enclave.out");

array<array<int,1003>,1003> e{};
array<pair<int,int>,102> t{};
int l,c,p,k,tr;
bool ok;

void fill() {
  if (!ok) return;

  e[l][c] = -k;
  p += (e[l+1][c]!=0 && abs(e[l+1][c])!=k) + (e[l-1][c]!=0 && abs(e[l-1][c])!=k) + (e[l][c+1]!=0 && abs(e[l][c+1])!=k) + (e[l][c-1]!=0 && abs(e[l][c-1])!=k);
  if (e[l+1][c] == 0 || e[l-1][c] == 0 || e[l][c+1] == 0 || e[l][c-1] == 0) {
    ok=false;
    return;
  }

  ++l;
  if (e[l][c]==k) fill();
  else if (e[l][c] != -k) {
    if (tr==0) tr=abs(e[l][c]);
    else if (abs(e[l][c]) != tr) {
      ok=false;
      --l;
      return;
    }
  }
  --l;
  
  --l;
  if (e[l][c]==k) fill();
  else if (e[l][c] != -k) {
    if (tr==0) tr=abs(e[l][c]);
    else if (abs(e[l][c]) != tr) {
      ok=false;
      ++l;
      return;
    }
  }
  ++l;

  ++c;
  if (e[l][c]==k) fill();
  else if (e[l][c] != -k) {
    if (tr==0) tr=abs(e[l][c]);
    else if (abs(e[l][c]) != tr) {
      ok=false;
      --c;
      return;
    }
  }
  --c;

  --c;
  if (e[l][c]==k) fill();
  else if (e[l][c] != -k) {
    if (tr==0) tr=abs(e[l][c]);
    else if (abs(e[l][c]) != tr) {
      ok=false;
      ++c;
      return;
    }
  }
  ++c;
}

int main() {
  int n, m;
  fin>>n>>m;

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      fin>>e[i][j];
      t[e[i][j]] = {i,j};
    }
  }

  int i=0, maxp=0, nume=0;
  while (t[++i] != t[101]) {
    k=i;
    l=t[i].first;
    c=t[i].second;
    ok=true;
    p=0;
    tr=0;
    fill();
    if (ok) {
      ++nume;
      maxp = max(maxp,p);
    }
  }
  fout<<nume<<" "<<maxp;
}