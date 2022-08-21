// https://www.varena.ro/problema/zaphod1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("zaphod1.in");
ofstream fout("zaphod1.out");

int main() {
  int n;
  fin>>n;

  queue<int> q;
  int s=2;
  ll r=1;
  for (int i=0; i<n-1; ++i) {
    r += s;
    if (r<=35000000) q.push(r);
    ++s;
    while (!q.empty() && s == q.front()) {
      ++s;
      q.pop();
    }
  }
  fout<<r;
}