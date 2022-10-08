// https://www.pbinfo.ro/probleme/3078/prod-k
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  bool dif=false;
  int p=1;
  while (n) {
    if (n%10 != k) {
      p *= n%10;
      dif = true;
    }
    n /= 10;
  }
  if (!dif) cout<<0;
  else cout<<p;
}