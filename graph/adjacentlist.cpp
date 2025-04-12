#include<iostream>
#include<vector>


using namespace std;

class Graph{
    int v;
    vector<vector<int>>adj;
    public:
    Graph(int vertices) {
        v = vertices;
        adj.resize(v,vector<int>(v, 0));
    }
    void addEdge(int u, int v) {
        adj[u][v]=1;
        adj[v][u]=1; // because the graph is undirected
    }
    void printGraph() {
        cout << "Adjacency Matrix:\n";
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5); // Create a graph with 5 nodes (0 to 4)

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Adjacency List of Graph:" << endl;
    g.printGraph();

    return 0;
}






