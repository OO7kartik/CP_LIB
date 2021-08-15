#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class BinaryIndexedTree {
  vector<ll> bt;
  int n;

  BinaryIndexedTree(ll a[], int size) {
    n=size;
    bt=vector<ll>(n);
    for(int i=0; i<n; i++) {
      update(i, a[i]);
    }
  }

  void update(int idx, int val) {
    for(; idx<=n;idx+=idx&-idx) {
      bt[idx]+=val;
    }
  }

  ll query(int idx) {
    ll res=0;
    for(;idx>0; idx-=idx&-idx) {
      res+=bt[idx];
    }
    return res;
  }
};