// https://www.pbinfo.ro/probleme/3278/aproapeprime
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int NMAX=100001;
bool ap[NMAX];

void ciur() {
  bitset<NMAX> c{};
  c[0] = c[1] = true;
  for (int i=2; i*i<NMAX; ++i) {
    if (c[i]) continue;
    for (int j=i*i; j<NMAX; j+=i) c[j] = true;
  }

  vector<int> p{};
  for (int i=0; i<NMAX; ++i) {
    if (!c[i]) p.push_back(i);
  }

  for (int i=0; i<p.size(); ++i) {
    for (int j=i; j<p.size() && (long long)p[i]*p[j]<NMAX; ++j) {
      ap[p[i]*p[j]] = true;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  ciur();
  for (int i=0; i<NMAX; ++i) {
    if (ap[i]) --n;
    if (n==0) {
      cout<<i;
      return 0;
    }
  }
}