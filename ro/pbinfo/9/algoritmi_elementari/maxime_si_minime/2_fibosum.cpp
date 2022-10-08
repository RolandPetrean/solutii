// https://www.pbinfo.ro/probleme/257/fibosum
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> fib{1, 1};
  while (fib[fib.size()-1]<n) {
    fib.push_back(fib[fib.size()-1]+fib[fib.size()-2]);
  }

  vector<int> el;
  int s=0;
  for (int i=fib.size()-1; i>=0; --i) {
    if (s+fib[i]<=n) {
      el.push_back(fib[i]);
      s += fib[i];
    }
  }

  for (int v:el) cout<<v<<" ";
}