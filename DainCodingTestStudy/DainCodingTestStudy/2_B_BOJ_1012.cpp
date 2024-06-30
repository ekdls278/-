#include<iostream>
#include<queue>
#include<vector>
#include<tuple>

using namespace std;

#define MAX 51

int dy[] = { 0, -1, 0, 1 };
int dx[] = { -1, 0, 1, 0 };


int T;
int N, M;
int K;

int board[MAX][MAX];
int visited[MAX][MAX];
vector<pair<int, int>> vec;

void Initialize()
{
	N = 0, M = 0, K = 0;
	vec.clear();
	memset(&board[0][0], 0, sizeof(board));
	memset(&visited[0][0], 0, sizeof(visited));
}

void Input()
{
	int y, x;
	cin >> M >> N >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> x >> y;
		vec.push_back(make_pair(y, x));
		board[y][x] = 1;
	}
}

void DFS(int y, int x)
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny >= N || ny < 0 || nx >= M || nx < 0 || board[ny][nx] == 0 || visited[ny][nx])continue;
		visited[ny][nx] = 1;
		DFS(ny, nx);
	}
}

int DFSEX()
{
	int cnt = 0;
	for (auto it : vec)
	{
		int y = it.first;
		int x = it.second;
		if (visited[y][x])continue;
		visited[y][x] = 1;
		cnt++;
		DFS(y, x);
	}
	return cnt;
}

void Solution()
{
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		Initialize();
		Input();
		cout << DFSEX() << endl;
	}
}

int main()
{
	Solution();
	return 0;
}