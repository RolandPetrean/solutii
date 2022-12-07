// https://www.nerdarena.ro/problema/cooler
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cooler.in");
ofstream fout("cooler.out");

// ATENTIE: cod super incalcit. nu incercati citirea :)
int main() {
  int p, n, k;
  fin>>p>>n>>k;

  vector<int> a(n);
  vector<pair<int,int>> s(n);
  for (int i=0; i<n; ++i) {
    fin>>a[i];
    s[i] = {a[i], i};
  }
  sort(s.begin(), s.end());

  vector<int> us; // unique s
  int x=0;
  for (int i=0; i<n; ++i, ++x) {
    if (i && s[i].first==s[i-1].first) --x;
    else us.push_back(s[i].first);
    a[s[i].second] = x;
  }

  if (p==1) {
    vector<int> ap(1005);
    bool ok=true;
    int maxi=0, mini=INT_MAX;
    for (int i=0; i<k; ++i) {
      maxi = max(maxi, a[i]); mini = min(mini, a[i]);
      if (ap[a[i]]) ok = false;
      ++ap[a[i]];
    }
    if (maxi-mini != k-1) ok = false;
    if (ok) fout<<us[maxi];
    else {
      int cnt=0;
      for (int i=0; i<1005; ++i) if (ap[i]==1) ++cnt;
      fout<<cnt;
    }
  } else {
    int maxl=0, cnt=0;
    for (int i=0; i<n; ++i) {
      vector<bool> ap(1005, false);
      bool ok=true;
      int maxi=0, mini=INT_MAX;
      for (int j=i; j<n && ok; ++j) {
        maxi = max(maxi, a[j]); mini = min(mini, a[j]);
        if (ap[a[j]]) ok = false;
        ap[a[j]] = true;

        if (ok && us[maxi]-us[mini] == j-i) {
          if (maxi-mini+1>maxl) {
            maxl = maxi-mini+1;
            cnt = 1;
          } else if (maxi-mini+1==maxl) ++cnt;
        }
      }
    }

    fout<<maxl<<endl<<cnt;
  }
}