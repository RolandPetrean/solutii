// https://www.pbinfo.ro/probleme/1952/pattern1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int mat[512][512];

void gen(int n, int l, int c) {
  if (n==0) return;
  mat[l][c] = n;

  --n;
  int x=pow(2, n-1);
  gen(n, l+x, c-x);
  gen(n, l-x, c+x);
  gen(n, l+x, c+x);
  gen(n, l-x, c-x);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int sz=pow(2, n);
  gen(n, sz/2, sz/2);
  for (int i=1; i<sz; ++i) {
    for (int j=1; j<sz; ++j) {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}