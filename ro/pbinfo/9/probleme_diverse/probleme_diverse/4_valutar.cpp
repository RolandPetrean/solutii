// https://www.pbinfo.ro/probleme/2980/valutar
// 55p for some reason
#include <bits/stdc++.h>
using namespace std;

ifstream fin("valutar.in");
ofstream fout("valutar.out");

struct Player {
  int lei, euro, pas, poz;
  bool elim;
};

struct Casa {
  char cod;
  int c, v;
};

int main() {
  int c, a, b, nr0, N, M, L, E, X;
  fin>>c>>a>>b>>nr0>>N>>M>>L>>E>>X;

  vector<Player> juc(M, Player{L, E, 0, 0, false});
  vector<Casa> val(N);
  for (int i=0; i<N; ++i) fin>>val[i].cod>>val[i].c>>val[i].v;

  vector<int> nr(X);
  nr[0] = (a*nr0+b)%N+1;
  for (int i=0; i<=X; ++i) {
    int j=i%M;
    if (juc[j].elim) {
      nr[i] = nr[i-1];
      continue;
    }
    if (i != 0) nr[i] = (a*nr[i-1]+b)%N+1;
    int poz=(juc[j].poz + nr[i])%N;
    juc[j].poz = poz;

    cout<<i+1<<" "<<j+1<<" "<<nr[i]<<" | "<<poz+1<<" "<<val[poz].cod<<" | "<<juc[j].lei<<" "<<juc[j].euro<<" "<<juc[j].pas<<endl;

    if (val[poz].cod == 'R') ++juc[j].pas;
    else if (val[poz].cod == 'G') {
      int l=val[poz].c*(poz+1);
      if (l<=juc[j].lei) {
        juc[j].lei -= l;
        juc[j].euro += poz+1;
      } else if (juc[j].pas) --juc[j].pas;
      else juc[j].elim = true;
    } if (val[poz].cod == 'V') {
      if (poz+1<=juc[j].euro) {
        juc[j].euro -= poz+1;
        juc[j].lei += val[poz].v*(poz+1);
      } else if (juc[j].pas) --juc[j].pas;
      else juc[j].elim = true;
    }
  }

  if (c==1) {
    int cnt=0;
    for (int i=0; i<M; ++i) {
      if (!juc[i].elim) ++cnt;
    }
    fout<<cnt;
  } else {
    int maxj=0;
    for (int i=0; i<M; ++i) {
      if (juc[i].euro > juc[maxj].euro || juc[maxj].elim) maxj = i;
    }
    fout<<maxj+1;
  }
}