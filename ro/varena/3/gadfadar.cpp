// https://www.varena.ro/problema/gadfadar
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("gadfadar.in");
ofstream fout("gadfadar.out");

const int MAXN=1000005;
vector<int> prime;

void init_ciur() {
  bitset<MAXN> ciur;
  for (int i=2; i*i<MAXN; ++i) {
    if (!ciur[i]) for (int j=i*i; j<MAXN; j+=i) ciur[j] = true;
  }

  for (int i=2; i<MAXN; ++i) {
    if (!ciur[i]) prime.push_back(i);
  }
}

int main() {
  int n;
  fin>>n;

  init_ciur();

  vector<string> intrusi{};
  for (int i=0; i<n; ++i) {
    string nume;
    long long id, nr;
    fin>>nume>>id>>nr;

    long long ans=1;
    for (int j=0; (long long)prime[j]*prime[j]<=id; ++j) {
      int d=prime[j];
      if (id%d==0) {
        long long p=1;
        while (id%d==0) {
          p *= d;
          id /= d;
        }
        ans *= (p*d-1)/(d-1);
      }
    }
    if (id>1) ans *= id+1;

    if (ans != nr) intrusi.push_back(nume);
  }

  sort(intrusi.begin(), intrusi.end());
  fout<<intrusi.size()<<endl;
  for (string intrus:intrusi) fout<<intrus<<endl;
}