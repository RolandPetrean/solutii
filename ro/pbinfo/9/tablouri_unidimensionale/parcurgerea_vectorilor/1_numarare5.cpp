// https://www.pbinfo.ro/probleme/499/numarare5
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int sumcif(int n) {
  int s=0;
  while (n) {
    s += n%10;
    n /= 10;
  }
  return s;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    cin>>v[i];
    v[i] = sumcif(v[i]);
  }

  int s=0;
  for (int i=0; i<n; ++i) {
    for (int j=i+1; j<n; ++j) {
      if (v[i]==v[j]) ++s;
    }
  }
  cout<<s;
}