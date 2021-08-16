class Dsu {
	vector<int> parent;
	vector<int> rank;

public:
	Dsu(int n) {
		for(int i=0; i<n; i++) {
			parent.push_back(i);
			rank.push_back(0);
		}
	}

	int find(int v) {
		return (parent[v]==v ? v : parent[v]=find(parent[v]));
	}

	void Union(int v, int u) {
		int x=find(v);
		int y=find(u);

		if(x==y) return;
		if(rank[x]>rank[y]) parent[y]=x;
		else if(rank[x]<rank[y]) parent[x]=y;
		else parent[x]=y, rank[y]++;
	}

	void print() {
		for(auto elem:parent)
			cout << elem << " ";
		cout << endl;
	}
};