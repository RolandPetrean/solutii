// https://www.pbinfo.ro/probleme/2082/sierpinski
#include <bits/stdc++.h>
using namespace std;

ifstream fin("sierpinski.in");
ofstream fout("sierpinski.out");

const int N = 729;
const int dl[9] = {0, -1, -1, -1, 0, 1, 1, 1, 0};
const int dc[9] = {0, -1, 0, 1, 1, 1, 0, -1, -1};
bitset<N> a[N]; // folosit la fel ca bool a[N][N] dar cu 8x putina memorie;

// Completeaza submatricea cu centru (l, c) de latura lat
void sierpi(int l, int c, int lat, bool plin) {
  if (lat == 1) {
    a[l][c] = plin;
    return;
  }
  lat /= 3;
  sierpi(l, c, lat, true);
  for (int i=1; i<9; ++i) {
    sierpi(l + lat*dl[i], c+lat*dc[i], lat, plin);
  }
}

int main() {
  int n;
  fin>>n;

  int lat=pow(3, n);
  sierpi(lat/2, lat/2, lat, false);

  for (int i=0; i<lat; ++i) {
    for (int j=0; j<lat; ++j) {
      fout<<a[i][j]<<" ";
    }
    fout<<endl;
  }
}