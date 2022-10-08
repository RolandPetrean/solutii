// https://www.pbinfo.ro/probleme/4082/pelican
#include <bits/stdc++.h>
using namespace std;



ifstream fin("pelican.in");
ofstream fout("pelican.out");

pair<char,int> cmd[100005];

int mod(int a, int b) {
  return ((a%b)+b)%b;
}

int main() {
  int n, p, k;
  fin>>n>>p>>k;

  vector<pair<pair<int,int>,int>> r{};
  for (int i=0; i<p; ++i) {
    int l, c, d;
    fin>>l>>c>>d;
    --d;
    r.push_back({{l, c}, d});
  }

  int dr=0;
  for (int i=0; i<k; ++i) {
    char ch;
    int nr;
    fin>>ch>>nr;
    if (dr>0 && ch == cmd[dr-1].first && ch != 'Z') cmd[--dr].second += nr;
    else cmd[dr] = {ch, nr};

    ++dr;
  }

  pair<int,int> z{-1,-1};
  array<pair<int,int>,4> dir{{{-1, 0}, {0, 1}, {1, 0}, {0, -1}}};
  int l=0, c=0, currd=0;
  for (int i=0; i<dr; ++i) {
    char ch=cmd[i].first;
    int nr=cmd[i].second;

    if (ch=='A') {
      l += nr*dir[currd].first;
      c += nr*dir[currd].second;
      l = mod(l, n);
      c = mod(c, n);
    } else if (ch=='R') {
      currd += nr;
      currd = mod(currd, 4);
    } else {
      z={nr/n,mod(nr, n)};
      l=0;
      c=0;
    }
  }
  
  for (pair<pair<int,int>,int> v:r) {
    int x=v.first.first, y=v.first.second;
    if (z.first != -1) {
      x=z.first;
      y=z.second;
    }
    if (v.second == 0) {
      x += l;
      y += c;
    } else if (v.second == 1) {
      x += c;
      y -= l;
    } else if (v.second == 2) {
      x -= l;
      y -= c;
    } else if (v.second == 3) {
      x -= c;
      y += l;
    }
    fout<<mod(x, n)<<" "<<mod(y, n)<<endl;
  }
}