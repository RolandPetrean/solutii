// https://codeforces.com/contest/1771/problem/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> primes{};

void ciur() {
  bitset<50000> c{};
  for (int i=2; i*i<50000; ++i) {
    if (!c[i]) {
      for (int j=i*i; j<50000; j+=i) c[j] = true;
    }
  }
  for (int i=2; i<50000; ++i) {
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

    vector<int> x;
    for (int i=0; i<n; ++i) {
      int a;
      cin>>a;

      for (int p=0; primes[p]*primes[p]<=a && p<primes.size(); ++p) {
        if (a%primes[p]==0) {
          while (a%primes[p]==0) a /= primes[p];
          x.push_back(primes[p]);
        }
      }
      if (a>1) x.push_back(a);
    }

    bool ok=false;
    sort(x.begin(), x.end());
    for (int i=1; i<x.size() && !ok; ++i) {
      if (x[i]==x[i-1]) ok = true;
    }
    cout<<(ok?"YES":"NO")<<endl;
  }
}