// https://www.pbinfo.ro/probleme/115/medie
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long s=0, p=0;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    if (x%2==0) {
      s += x;
      ++p;
    }
  }
  cout<<(float) s/p;
}