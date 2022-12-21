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
    string s;
    cin>>n>>s;
    
    int first1=-1;
    for (int i=0; i<s.size() && first1==-1; ++i) {
      if (s[i]=='1') first1 = i;
    }

    bool ok=false;
    for (int i=first1+1; i<s.size() && !ok; ++i) {
      if (s[i]=='1' && (i-first1)&1) ok = true;
    }

    cout<<(ok?1:2)<<endl;
  }
}