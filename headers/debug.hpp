#define debug(var) cout << #var << ": ", cout << var << endl;
#define debug2(var1, var2) cout << "["<< #var1 << ", " << #var2 << "]" << ": " << "["<< var1 << ", " << var2 << "]" << endl;
#define debug3(var1, var2, var3) cout << "["<< #var1 << ", " << #var2 << ", " << #var3 << "]" << ": " << "["<< var1 << ", " << var2 << ", " << var3 << "]" << endl;

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
ostream& operator<<(ostream& os, const multimap<T, S>& v) { 
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