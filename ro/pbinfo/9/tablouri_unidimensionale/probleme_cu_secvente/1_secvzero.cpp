// https://www.pbinfo.ro/probleme/518/secvzero
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  pair<long long long long> m{0,0}, curr{0,0};
  for (int i=0; i<n; i++) {
    long long x;
    cin>>x;
    if (x == 0) {
      if (curr.first == 0) curr.second = i+1;
      ++curr.first;
    } else {
      if (curr.first > m.first) m = curr;
      curr.first = 0;
    }
  }
  if (curr. first > m.first) m = curr;
  cout<<m.second<<" "<<m.second + m.first - 1;
}