#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void sieve(ll n) {
  vector<bool> isprime(n+1, true);

  for(ll i=2; i*i<=n; i++) {
    if(isprime[i]) {
      for(int j=i*i; j<=n; j+=i) {
        isprime[i]=false;
      }
    }
  }

  for(int i=2; i<n; i++) {
    if(isprime[i]) {
      primes.push_back(i);
    }
  }
}