// https://www.pbinfo.ro/probleme/4169/switchletters
// 93p
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("switchletters.in");
ofstream fout("switchletters.out");

const int MAXN=4000001;
char a[MAXN][26];
string s;

void build(int nod, int l, int r) {
  for (int i=0; i<26; ++i) a[nod][i] = i;
  if (l != r) {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
    for (int i=0; i<26; ++i) a[nod][i] = i;
  }
}

void push(int nod) {
  for (int i=0; i<26; ++i) {
    a[2*nod][i] = a[nod][a[2*nod][i]];
    a[2*nod+1][i] = a[nod][a[2*nod+1][i]];
  }
}

void update(int nod, int l, int r, int ql, int qr, int x, int y) {
  if (l >= ql && r <= qr) {
    for (int i=0; i<26; ++i) {
      if (a[nod][i]==x) a[nod][i] = y;
    }
  } else {
    int mid=(l+r)/2;
    push(nod);
    for (int i=0; i<26; ++i) a[nod][i] = i;
    if (ql<=mid) update(2*nod, l, mid, ql, qr, x, y);
    if (mid<qr) update(2*nod+1, mid+1, r, ql, qr, x, y);
  }
}

void query(int nod, int l, int r) {
  if (l == r) s[l] = a[nod][s[l]-'a'];
  else {
    int mid=(l+r)/2;
    push(nod);
    query(2*nod, l, mid);
    query(2*nod+1, mid+1, r);
  }
}

int main() {
  int m, n;
  fin>>s>>m;
  s = '$'+s;
  n=s.size();

  build(1, 1, n);

  for (int i=0; i<m; ++i) {
    int ql, qr;
    char x, y;
    fin>>ql>>qr>>x>>y;
    ++ql; ++qr;
    update(1, 1, n, ql, qr, x-'a', y-'a');
  }

  query(1, 1, n);
  for (int i=1; i<n; ++i) fout<<(char)(s[i]+'a');
}