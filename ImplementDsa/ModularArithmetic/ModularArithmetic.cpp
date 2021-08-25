int MOD = 69;
struct mint {
  int x; explicit operator int() const { return x; }
  mint() { x = 0; }
  mint (int64_t x) : x(x % MOD) { if (x < 0) x += MOD; }
  friend bool operator == (const mint& a, const mint& b) { return a.x == b.x; }
  friend bool operator != (const mint& a, const mint& b) { return !(a == b); }
  friend bool operator < (const mint& a, const mint& b) { return a.x < b.x; }
  mint& operator += (const mint& y) { if ((x += y.x) >= MOD) x -= MOD; return *this; }
  mint& operator -= (const mint& y) { if ((x -= y.x) < 0) x += MOD; return *this; }
  mint& operator *= (const mint& y) { x = int((int64_t) x * y.x % MOD); return *this; }
  mint& operator /= (const mint& m) { return (*this) *= inv(m); }
  friend mint pow(mint a, int64_t p) { mint ans(1); for (; p; p >>= 1, a *= a) if (p & 1) ans *= a; return ans; }
  friend mint inv(const mint& a) { return pow(a, MOD - 2); }
  mint operator - () const { return mint(-x); }
  mint& operator ++ () { return *this += 1; }
  mint& operator -- () { return *this -= 1; }
  friend mint operator + (mint a, const mint& b) { return a += b; }
  friend mint operator - (mint a, const mint& b) { return a -= b; }
  friend mint operator * (mint a, const mint& b) { return a *= b; }
  friend mint operator / (mint a, const mint& b) { return a /= b; }
  friend ostream& operator << (ostream& os, const mint& a) { os << a.x; return os; }
};