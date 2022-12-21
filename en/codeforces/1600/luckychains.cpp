// https://codeforces.com/problemset/problem/1766/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

const int MAXP=3200;
vector<int> p{};

void ciur() {
  bitset<MAXP> c{};
  for (int i=2; i*i<MAXP; ++i) {
    if (!c[i]) for (int j=i*i; j<MAXP; j+=i) c[j] = true;
  }

  for (int i=2; i<MAXP; ++i) {
    if (!c[i]) p.push_back(i);
  }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  ciur();
  
  while (n--) {
    int x, y;
    cin>>x>>y;
    if (__gcd(x, y) != 1) {
      cout<<"0\n";
      continue;
    }

    int z=y-x;
    if (z==1) {
      cout<<"-1\n";
      continue;
    }

    int minc=INT_MAX;
    for (int i=0; p[i]*p[i]<=z; ++i) {
      if (z%p[i]==0) {
        while (z%p[i]==0) z /= p[i];
        minc = min(minc, p[i]-(x%p[i]));
      }
    }
    if (z>1) minc = min(minc, z-(x%z));

    cout<<minc<<endl;
  }
}