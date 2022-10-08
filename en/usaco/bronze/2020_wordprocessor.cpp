// http://www.usaco.org/index.php?page=viewproblem2&cpid=987
#include <bits/stdc++.h>
using namespace std;

ifstream fin("word.in");
ofstream fout("word.out");

int main() {
  int n, k;
  fin>>n>>k;

  int curr=0;
  string s="";
  while (n--) {
    string w;
    fin>>w;

    if (curr+w.size() > k) {
      s.pop_back();
      s += "\n"+w+" ";
      curr = 0;
    } else s += w+" ";
    curr += w.size();
  }
  s.pop_back();
  fout<<s;
}