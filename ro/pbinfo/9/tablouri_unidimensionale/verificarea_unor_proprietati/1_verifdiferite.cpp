// https://www.pbinfo.ro/probleme/502/verifdiferite
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  set<long long> e;
  for (int i=1; i<=n; ++i) {
    long long x;
    cin>>x;

    if (e.count(x)>0) {
      cout<<"NU";
      return 0;
    }
    e.emplace(x);
  }
  cout<<"DA";
}