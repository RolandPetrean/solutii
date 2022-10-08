// https://www.varena.ro/problema/joc6
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("joc6.in");
ofstream fout("joc6.out");

// dp[x][y] - valoarea secventei care se termina pe x folosind y bile speciale
int b[500001];
long long dp[500001][3];

int main() {
  int n, k, p;
  fin>>n>>k>>p;

  pair<long long,int> maxi{0,0};
  for (int i=0; i<k; ++i) {
    memset(b, 0, sizeof(b));

    int z=0;
    for (int j=0; j<p; ++j) {
      int x;
      fin>>x;
      if (!x) ++z;
      else ++b[x];
    }

    for (int x=1; x<=n; ++x) {
      for (int y=0; y<=z; ++y) {
        dp[x][y] = 0;
        if (b[x]) dp[x][y] = x+dp[x-1][y];
        else if (y!=0) dp[x][y] = dp[x-1][y-(!b[x])];
        if (dp[x][y] > maxi.first) maxi={dp[x][y], i+1};
      }
    }    
  }

  fout<<maxi.second<<" "<<maxi.first;
}