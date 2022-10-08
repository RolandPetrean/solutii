// https://www.pbinfo.ro/probleme/376/suma-divizori

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  long long s=0;
  for (int i=1; i*i<=n; i++) {
    if (n%i==0) {
      s += i;
      if (n/i != i) s += n/i;
    }
  }
  cout<<s;
}