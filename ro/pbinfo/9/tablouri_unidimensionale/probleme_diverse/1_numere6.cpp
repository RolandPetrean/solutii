// https://www.pbinfo.ro/probleme/995/numere6
#include <bits/stdc++.h>
using namespace std;

ifstream fin("numere6.in");
ofstream fout("numere6.out");

int main() {
  int x, y;
  fin>>x>>y;

  array<int,10> freq{};
  freq[0] += (x==0)+(y==0);
  while (x) {
    ++freq[x%10];
    x /= 10;
  }
  while (y) {
    ++freq[y%10];
    y /= 10;
  }

  for (int i=9; i>=0; --i) {
    if (freq[i]) {
      while (freq[i]--) fout<<i;
    }
  }
}