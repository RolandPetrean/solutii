// https://codeforces.com/problemset/problem/1551/C
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;

    vector<vector<int>> freq(26, vector<int>(n));
    for (int i=0; i<n; ++i) {
      string s;
      cin>>s;
      for (int c=0; c<26; ++c) {
        int nr=0;
        for (int j=0; j<s.size(); ++j) {
          if ((int)s[j]-'a'==c) ++nr;
        }
        freq[c][i] = nr-(s.size()-nr);
      }
    }

    int maxi=0;
    for (int c=0; c<26; ++c) {
      sort(freq[c].begin(), freq[c].end(), greater<int>());

      int s=0, curr=0;
      for (int i=0; i<n; ++i) {
        if (s+freq[c][i]<=0) break;
        s += freq[c][i];
        ++curr;
      }
      maxi = max(maxi, curr);
    }

    cout<<maxi<<endl;
  }
}