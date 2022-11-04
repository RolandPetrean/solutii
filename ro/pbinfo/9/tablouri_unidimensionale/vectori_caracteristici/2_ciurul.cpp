// https://www.pbinfo.ro/probleme/2576/ciurul-lui-eratosthenes
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 1000001;
bitset<N> ciur{};

void init_ciur() {
  ciur[0] = ciur[1] = true;
  for (int i=2; i*i<=N; ++i) {
    if (!ciur[i]) {
      for (int j=i*i; j<N; j+=i) ciur[j] = true;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  init_ciur();

  for (int i=0; i<=n; ++i) {
    if (!ciur[i]) cout<<i<<" ";
  }
}