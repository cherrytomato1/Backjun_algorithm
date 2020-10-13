/*

	로봇 청소기

	1.현재 위치를 청소한다.
	2.현재 위치에서 현재 방향을 기준으로 왼쪽방향부터 차례대로 탐색을 진행한다.
		2-1. 왼쪽 방향에 아직 청소하지 않은 공간이 존재한다면, 그 방향으로 회전한 다음 한 칸을 전진하고 1번부터 진행한다.
		2-2. 왼쪽 방향에 청소할 공간이 없다면, 그 방향으로 회전하고 2번으로 돌아간다.
		2-3. 네 방향 모두 청소가 이미 되어있거나 벽인 경우에는, 바라보는 방향을 유지한 채로 한 칸 후진을 하고 2번으로 돌아간다.
		2-4. 네 방향 모두 청소가 이미 되어있거나 벽이면서, 뒤쪽 방향이 벽이라 후진도 할 수 없는 경우에는 작동을 멈춘다.
*/
#include<iostream>
#include<vector>

#define MAX 50

#define Nth 0
#define Est 1
#define Sth 2
#define Wst 3

using namespace std;

typedef struct _pixel{
	int type;
	int clean;
}pixel;

class robot {
	private :
		int map[MAX][MAX] = { 0, };
		int n, m, count, x, y, d;

	robot(int n, int m, int r, int c, int d)
	{
		this->n = n;
		this->m = m;
		this->count = 0;
		this->x = r;
		this->y = c;
		this->d = d;
	}
	void set_map()
	{
		int temp;
		for(int i = 0; i<n; i++)
			for (int j = 0; j < m; j++)
			{
				cin >> temp;
				this->map[j][i] = temp;
			}
	}
	
	void print_map()
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cout << this->map[j][i];
	}

};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, r, c, d;

	cin >> n;
	cin >> m;

	cin >> r;
	cin >> c;
	cin >> d;

	robot rbt(n, m, r, c, d);

}