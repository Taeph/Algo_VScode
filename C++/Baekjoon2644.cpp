#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;

class Graph {
    public :
        int N;
        vector <vector<int>> adj;

        // 생성자
        Graph() : N(0) { }
        Graph(int n) : N(n) { adj.resize(N); }

        // 간선 추가 함수
        void addEdge (int u, int v) {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // 모든 리스트의 인접한 정점 번호 정렬
        void sortList() {
            for(int i=0; i<N; i++) {
                sort(adj[i].begin(), adj[i].end());
            }
        }

        // 너비 우선 탐색 (BFS)
        void bfs() {
            vector<bool> visited(N, false); // 방문 여부를 저장하는 배열
            queue<int> Q;
            Q.push(0);
            visited[0] = true;
            
            // 탐색 시작
            int level = 0;
            while(!Q.empty()) {
                int qSize = Q.size();
                cout << "-------- level " << level << "--------" << endl;
                for(int i=0; i<qSize; i++) {
                    int curr = Q.front();
                    Q.pop();
                    cout << "node " << curr << " visited" << endl;
                    for(int next: adj[curr]) {
                        if(!visited[next]) {
                            visited[next] = true;
                            Q.push(next);
                        }
                    }
                }
                level++;
            }    
        }
};

int main() {
    int N, a, b, cnt;
    cin >> N;
    cin >> a >> b;
    cin >> cnt;
    cin.ignore();

    Graph G(N);

    for(int i=0; i<cnt; i++) {
        string str="", a="", b="";
        int tempA=0, tempB=0;
        getline(cin, str);
        // cout << str << endl;
        a = str.substr(0,1);
        b = str.substr(2,1);
        // cout << a << b << endl;
        tempA = stoi(a);
        tempB = stoi(b);
        // cout << tempA << tempB << endl;
        G.addEdge(tempA, tempB);
    }

    G.sortList();
    G.bfs();
}