// https://www.codechef.com/START71B/problems/PETSTORE
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    array<int,101> p{};
    for (int i=0; i<n; ++i) {
      int a;
      cin>>a;
      ++p[a];
    }

    bool ok=true;
    for (int i=0; i<101; ++i) {
      if (p[i]&1) ok = false;
    }

    cout<<(ok?"YES":"NO")<<endl;
  }
}