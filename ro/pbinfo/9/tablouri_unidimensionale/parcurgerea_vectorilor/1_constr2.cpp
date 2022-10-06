// https://www.pbinfo.ro/probleme/495/constr2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool prim(int x) {
  if (x<4) return x>=2;
  if (x%2==0||x%3==0) return false;
  for (int d=5; d*d<=x; d+=6)
    if (x%d==0 || x%(d+2)==0)
      return false;
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> prime;
  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    if (prim(x)) prime.push_back(x);
  }

  for (int i=prime.size()-1; i>=0; --i) cout<<prime[i]<<" ";
}