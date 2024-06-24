/*
(1, 1) -> (N, M)
최소칸수

*/
#include<iostream>
#include<queue>
#include<tuple>
#include<string>

#pragma warning (disable : 4996)

using namespace std;

#define MAX 100
#define INF 1987654321

int dy[] = { 0, -1, 0, 1 };
int dx[] = { -1, 0, 1, 0 };


//! N : 행, M : 열
int board[MAX][MAX];
int visited[MAX][MAX];
int N, M;


void Input()
{
	string str = "";
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%1d", &board[i][j]);
		}
	}
}

void BFS()
{
	queue<pair<int, int>> q;

	q.push(make_pair(0,0));
	visited[0][0] = 1;

	while (!q.empty())
	{
		pair<int, int> now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = now.first + dy[i];
			int nx = now.second + dx[i];

			if (ny >= N || ny < 0 || nx >= M || nx < 0 || !board[ny][nx]) continue;
			if (visited[ny][nx] > visited[now.first][now.second] + 1)
			{
				q.push(make_pair(ny, nx));
				visited[ny][nx] = visited[now.first][now.second] + 1;
			}
		}
	}


}

void Solution()
{
	Input();
	fill(&visited[0][0], &visited[0][0] + MAX * MAX, INF);
	BFS();
	cout << visited[N - 1][M - 1] << endl;

}


int main()
{
	Solution();


}