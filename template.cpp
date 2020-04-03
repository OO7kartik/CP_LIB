#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
#define endl '\n'
#define debug(var) cout << #var << ": ", cout << var << endl;

template <typename T> ostream& operator<<(ostream& os, const vector<T>& v) { 
  os << "["; 
  for (int i=0;i<v.size();++i) { 
    os << v[i]; 
    if (i!=v.size()-1) 
      os << ", "; 
  } 
  os << "]"; 
  return os; 
} 

template <typename T> ostream& operator<<(ostream& os, const vector<vector<T>>& v) { 
  for (int i=0;i<v.size();++i) { 
    if(i!=0) os << "   ";
      os << "[[";
    for(int j=0; j<v[i].size();++j) {
      os << v[i][j];
      if (j!=v[i].size()-1) {
        os << ", ";
      } 
    }
    os << "]]\n";
  } 
  return os; 
} 

template <typename T> ostream& operator<<(ostream& os, const set<T>& v) { 
  os << "["; 
  for (auto it : v) { 
    os << it; 
    if (it != *v.rbegin()) 
      os << ", "; 
  } 
  os << "]"; 
  return os; 
} 

template <typename T, typename S> 
ostream& operator<<(ostream& os, const map<T, S>& v) { 
  bool ok=false;
  for (auto it : v)  {
    if(ok) os << "    ";
    os << it.first << " : " 
       << it.second << endl;
    ok=true; 
  }
  return os; 
} 

template <typename T, typename S> 
ostream& operator<<(ostream& os, const pair<T, S>& v) { 
  os << "("; 
  os << v.first << ", " 
     << v.second << ")"; 
  return os; 
} 
  
/*-----------------------------------------------*/
//start custom functions



//end custom functions
/*-----------------------------------------------*/
 
int main() {
  clock_t begin = clock();
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
  #ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  #endif
 
  /*-----------------------------------------------*/
  //start
  
  
 
  //end
  /*-----------------------------------------------*/
 
  clock_t end = clock();
  #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms.\n";
  #endif
  return 0;
}
