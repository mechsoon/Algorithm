#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#define INF numeric_limits<int>::max()

using namespace std;

int N, M;

// Dijkstra 알고리즘
vector<int> dijkstra(int start, vector<vector<pair<int, int>>>& graph) {
    vector<int> dist(N + 1, INF); // 거리 배열 초기화
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int cur_dist = pq.top().first;
        int cur_node = pq.top().second;
        pq.pop();

        // 이미 처리된 노드라면
        if (cur_dist > dist[cur_node]) continue;

        for (const auto& edge : graph[cur_node]) {
            int next_node = edge.first;
            int weight = edge.second;

            int next_dist = cur_dist + weight;
            if (next_dist < dist[next_node]) {
                dist[next_node] = next_dist;
                pq.push({next_dist, next_node});
            }
        }
    }

    return dist;
}

int main() {
    cin >> N >> M;

    vector<vector<pair<int, int>>> graph(N + 1);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].emplace_back(b, 1); // 가중치 1
        graph[b].emplace_back(a, 1); // 무방향 그래프
    }

    int min_total_distance = INF;
    int best_node = 0;

    for (int i = 1; i <= N; i++) {
        vector<int> dist = dijkstra(i, graph);

        int total_distance = 0;
        bool valid = true;

        // 거리 총합 계산
        for (int j = 1; j <= N; j++) {
            if (dist[j] == INF) {
                valid = false; // 연결되지 않은 노드가 있으면 유효하지 않음
                break;
            }
            total_distance += dist[j];
        }

        if (valid && total_distance < min_total_distance) {
            min_total_distance = total_distance;
            best_node = i;
        }
    }

    cout << best_node << "\n";

    return 0