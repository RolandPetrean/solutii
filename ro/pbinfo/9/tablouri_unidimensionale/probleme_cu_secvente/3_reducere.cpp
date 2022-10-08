// https://www.pbinfo.ro/probleme/71/reducere
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

bool solve() {
  long long n, m;
  cin>>n;
  vector<long long> t1(n);
  for (int i=0; i<n; i++) cin>>t1[i];
  cin>>m;
  vector<long long> t2(m);
  for (int i=0; i<m; i++) cin>>t2[i];
  if (n < m) return false;
  
  for (int i=0; i<m; i++) {
    if (t1[i] != t2[i] && i+1<t1.size()) {
      t1[i] += t1[i+1];
      t1.erase(t1.begin()+i+1);
      --i;
    }
  }

  if (t1.size() != t2.size()) return false;
  for (int i=0; i<m; i++) {
    if (t1[i] != t2[i]) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long t;
  cin>>t;
  for (int i=0; i<t; i++) {
    cout<<solve()<<endl;
  }
}