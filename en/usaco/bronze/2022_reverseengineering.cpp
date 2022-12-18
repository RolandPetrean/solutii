// http://www.usaco.org/index.php?page=viewproblem&cpid=1241
// 4/12...
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> _and(vector<int> a, vector<int> b) {
  vector<int> c{};
  for (int i=0; i<a.size(); ++i) c.push_back(a[i]&b[i]);
  return c;
}

vector<int> _or(vector<int> a, vector<int> b) {
  vector<int> c{};
  for (int i=0; i<a.size(); ++i) c.push_back(a[i]|b[i]);
  return c;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--){ 
    int n, m;
    cin>>n>>m;
    
    vector<vector<int>> a(m, vector<int>(n));
    vector<int> res(m);
    for (int i=0; i<m; ++i) {
      for (int j=0; j<n; ++j) {
        char c;
        cin>>c;
        a[i][j] = c-'0';
      }
      cin>>res[i];
    }

    bool lie=false;
    for (int i=0; i<m && !lie; ++i) {
      int b=!res[i];
      vector<int> c(n);

      bool found=false;
      for (int j=0; j<m; ++j) {
        if (res[j]==b && _and(a[i], a[j]) == a[j]) {
          found = true;
          c = _or(c, a[j]);
        }
      }

      if (found && c==a[i]) lie = true;
    }

    cout<<(lie?"LIE":"OK")<<endl;
  }
}

/*
1 3 4
0100 1
0001 0
0101 1
0100 1
*/