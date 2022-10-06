// https://www.varena.ro/problema/tower
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("tower.in");
ofstream fout("tower.out");

int main() {
  int n, h;
  fin>>n>>h;

  int maxi=0;
  stack<pair<int,int>> s{{{0,INT_MAX}}};
  for (int i=0; i<n; ++i) {
    int x;  
    fin>>x;

    while (x>s.top().second) s.pop();
    if (x<h) s.push({s.top().first+1,x});

    maxi = max(maxi, s.top().first);
  }
  maxi = max(maxi, s.top().first);

  fout<<maxi;
}