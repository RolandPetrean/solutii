// https://www.codechef.com/problems/PRIMEREVERSE
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--){ 
    int n;
    string a, b;
    cin>>n>>a>>b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool ok=true;
    for (int i=0; i<n && ok; ++i) {
      if (a[i] != b[i]) ok = false;
    }

    cout<<(ok?"YES":"NO")<<endl;
  }
}