// https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string dna;
  cin>>dna;

  int best=1, chain=1;
  for (int i=1; i<dna.length(); i++) {
    if (dna[i] == dna[i-1]) chain++;
    else chain = 1;
    best = max(best, chain);
  }
  cout<<best;
}