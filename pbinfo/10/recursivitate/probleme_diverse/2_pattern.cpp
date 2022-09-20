// https://www.pbinfo.ro/probleme/845/pattern
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool m[1050][1050]{};

void pattern(int l, int c, int dim) {
  if (dim==0) return;
  dim /= 2;
  for (int i=l; i<l+dim; ++i) {
    for (int j=c; j<c+dim; ++j) {
      m[i][j] = 1;
    }
  }
  pattern(l+dim, c, dim);
  pattern(l, c+dim, dim);
  pattern(l+dim, c+dim, dim);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int dim=pow(2, n);
  pattern(0, 0, dim);
  for (int i=0; i<dim; ++i) {
    for (int j=0; j<dim; ++j) {
      cout<<m[i][j]<<" ";
    }
    cout<<endl;
  }
}