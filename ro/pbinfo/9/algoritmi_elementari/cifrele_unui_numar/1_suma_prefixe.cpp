// https://www.pbinfo.ro/probleme/3077/suma-prefixe
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  long long s=0;
  while (n) {
    s += n;
    n /= 10;
  }
  cout<<s;
}