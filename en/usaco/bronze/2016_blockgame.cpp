// http://www.usaco.org/index.php?page=viewproblem2&cpid=664
#include <bits/stdc++.h>
using namespace std;

ifstream fin("blocks.in");
ofstream fout("blocks.out");

int main() {
  int n;
  fin>>n;

  array<int,26> letters{};
  for (int i=0; i<n; ++i) {
    string a, b;
    fin>>a>>b;

    array<int,26> inca{}, incb{};
    for (char c:a) ++inca[c-97];
    for (char c:b) ++incb[c-97];
    
    for (int j=0; j<26; ++j) letters[j] += max(inca[j], incb[j]);
  }

  for (int i=0; i<26; ++i) fout<<letters[i]<<endl;
}