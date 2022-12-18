// https://codeforces.com/contest/1762/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MAXN=32000;
vector<int> primes{};

void ciur() {
  bitset<MAXN> c{};
  for (int i=2; i*i<MAXN; ++i) {
    if (!c[i]) for (int j=i*i; j<MAXN; ++j) c[j] = true;
  }

  for (int i=2; i<MAXN; ++i) {
    if (!c[i]) primes.push_back(i);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  ciur();

  while (t--) {
    int n;
    cin>>n;

    vector<pair<int,int>> a(n);
    for (int i=0; i<n; ++i) {
      cin>>a[i].first;
      a[i].second = i;
    }
    sort(a.begin(), a.end());

    vector<pair<int,int>> ops{};
    for (int p:primes) {
      ops.clear();
      int curr=p;
      for (int i=0; i<n && ops.size()<=n; ++i) {
        int d=a[i].first, x=curr-(a[i].first%curr);
        while (x && ops.size()<=n) {
          int m=min(x, d);
          ops.push_back({a[i].second+1, m});
          x -= m;
          d += m;
        }
        curr = d;
      }
      if (ops.size()<=n) {
        cout<<ops.size()<<endl;
        for (auto op:ops) cout<<op.first<<" "<<op.second<<endl;
        break;
      }
    }
  }  
}
