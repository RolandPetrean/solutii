// https://www.pbinfo.ro/probleme/171/primaciframinima
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  pair<long long long long> mini{10,0};
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;

    long long ox=x, c=0;
    while (x>0) {
      c = x%10;
      x /= 10;
    }
    if (c<mini.first || (c == mini.first && ox > mini.second)) mini = {c,ox};
  }
  cout<<mini.second;
}