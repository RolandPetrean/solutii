// https://www.pbinfo.ro/probleme/51/suma
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long x=1, s=0;
  while (x != 0) {
    cin>>x;
    s += x;
  }
  cout<<s;
}
