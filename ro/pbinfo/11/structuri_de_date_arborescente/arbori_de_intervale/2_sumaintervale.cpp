// https://www.pbinfo.ro/probleme/3886/suma-intervale
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

const int MAXN=100005;
int n, m, a[MAXN];

void update(int pos, int x) {
  if (pos>0) for (int i=pos; i<=n; i+=(i&-i)) a[i] += x;
}

int query(int pos) {
  int s=0;
  for (int i=pos; i>0; i-=(i&-i)) s += a[i];
  return s;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin>>n>>m;

  for (int i=1; i<=n; ++i) {
    int x;
    cin>>x;
    update(i, x);
  }

  while (m--) {
    int op, x, y;
    cin>>op>>x>>y;
    if (op==1) update(x, y-query(x)+query(x-1));
    else cout<<query(y)-query(x-1)<<endl;
  }
}