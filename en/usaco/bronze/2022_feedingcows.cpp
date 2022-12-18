// http://www.usaco.org/index.php?page=viewproblem&cpid=1240
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, k;
    string s;
    cin>>n>>k>>s;
    ++k;

    int cnt=0;
    array<int,2> fed{};
    vector<char> p(n+k+2, '.');
    for (int i=0; i<n; ++i) {
      if (s[i]=='G' && !fed[0]) {
        p[i+k-1] = 'G';
        fed[0] = 2*k-1;
        if (i+k-1>=n) {
          bool ok=false;
          for (int j=i; j<n && !ok; ++j) {
            if (p[j] == '.') {
              p[j] = 'G';
              ok = true;
            }
          }
          for (int j=i; j>=i-k+1 && !ok; --j) {
            if (p[j]=='.') {
              p[j] = 'G';
              ok = true;
              fed[0] = 2*(k-i+j)-1;
            }
          }
          assert(ok);
        }
        ++cnt;
      } else if (s[i]=='H' && !fed[1]) {
        p[i+k-1] = 'H';
        fed[1] = 2*k-1;
        if (i+k-1>=n) {
          bool ok=false;
          for (int j=i; j<n && !ok; ++j) {
            if (p[j] == '.') {
              p[j] = 'H';
              ok = true;
            }
          }
          for (int j=i; j>=i-k+1 && !ok; --j) {
            if (p[j]=='.') {
              p[j] = 'H';
              ok = true;
              fed[1] = 2*(k-i+j)-1;
            }
          }
          assert(ok);
        }
        ++cnt;
      }
      if (fed[0]) --fed[0];
      if (fed[1]) --fed[1];
    }

    cout<<cnt<<endl;
    for (int i=0; i<n; ++i) cout<<p[i];
    cout<<endl;
  }
}