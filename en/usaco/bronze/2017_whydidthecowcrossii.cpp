// http://www.usaco.org/index.php?page=viewproblem2&cpid=712
#include <bits/stdc++.h>
using namespace std;

ifstream fin("circlecross.in");
ofstream fout("circlecross.out");

int main() {
  array<int,26> p1{}, p2{};
  fill(p1.begin(), p1.end(), -1);
  for (int i=0; i<52; ++i) {
    char ch;
    fin>>ch;

    int c = ch-65;
    if (p1[c] == -1) p1[c] = i;
    else p2[c] = i;
  }

  int cnt=0;
  for (int i=0; i<26; ++i) {
    for (int j=i+1; j<26; ++j) {
      if ((p1[j] >= p1[i] && p1[j] <= p2[i]) ^ (p2[j] >= p1[i] && p2[j] <= p2[i])) ++cnt;
    }
  }

  fout<<cnt;
}