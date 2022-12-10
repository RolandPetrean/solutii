
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("roman.in");
ofstream fout("roman.out");

#define int long long

// suma nr intre a si b inclusiv
int gauss(int a, int b) {
  return (a+b)*(b-a+1)/2;
}

signed main() {
  int n, q;
  fin>>n>>q;

  while (q--) {
    int x1, y1, x2, y2;
    fin>>x1>>y1>>x2>>y2;

    if (x1>x2 || (x1==x2 && y1>y2)) {
      swap(x1, x2);
      swap(y1, y2);
    }

    int st=n*(x1-1)+min(y1, y2), dr=n*(x1-1)+max(y1, y2);
    fout<<gauss(st, dr) + n*gauss(1, x2-x1)+(n*(x1-1)+y2)*(x2-x1)<<endl;
  }
}