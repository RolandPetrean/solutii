// https://infoarena.ro/problema/aib
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("aib.in");
ofstream fout("aib.out");

const int MAXN=100005;
int n, m, a[MAXN];

void update(int pos, int val) {
  for (int i=pos; i<=n; i+=(i&-i)) a[i] += val;
}

int query(int pos) {
  int s=0;
  for (int i=pos; i>0; i-=(i&-i)) s += a[i];
  return s;
}

int query(int l, int r) {
  return query(r)-query(l-1);
}

int main() {
  fin>>n>>m;
  for (int i=1; i<=n; ++i) {
    int x;
    fin>>x;
    update(i, x);
  }

  for (int i=0; i<m; ++i) {
    int op, a;
    fin>>op>>a;

    if (op==0) {
      int b;
      fin>>b;
      update(a, b);
    } else if (op==1) {
      int b;
      fin>>b;
      fout<<query(a, b)<<endl;
    } else {
      int l=1, r=n, res=-1;
      while (l<=r) {
        int mid=(l+r)/2, v=query(mid);
        if (v==a) {
          res = mid;
          break;
        } else if (v<a) l=mid+1;
        else r=mid-1;
      }
      fout<<res<<endl;
    }
  }
}