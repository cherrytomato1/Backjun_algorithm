
/*
	1. 가장 긴 증가하는 수열은 최대로 증가하는 수열의 크기를 구하는 것
	2. 수열의 마지막 수부터 검사하며, 그 수부터 수열 끝까지 검사하며 그 수보다 큰 수가 있을 경우 증가하는 수열이 있고 그 만큼 수를 더함
	3. 마지막 수부터 반복하므로 이미 구해진 수의 증가 수열을 배열에 저장함
	4. 해당 수보다 뒤에 있는 값에 저장되어 있는 증가 수열들을 비교하여 가장 큰 증가수열을 검사하는 수에 저장함
	5. 검사 후 자신도 수열에 포함되므로 +1

	1. 수열의 각 수의 값과, 그 수가 가질 수 있는 최대의 증가하는 수열 크기를 저장하기 위해 이중 배열 선언
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define CNT 1		
#define NUM 0

int d[1000][2],N;								//수열의 각 수의 값과, 그 수가 가질 수 있는 최대의 증가하는 수열 크기를 저장하기 위해 이중 배열 선언

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt=0,res=0;
	cin >> N;
	
	for (int i = 0; i < N; i++)					// 수열을 입력받아 배열의 수 값에 저장
		cin >> d[i][NUM];
	
	for (int i = N - 1; i >= 0; i--)			//수열의 뒤부터 첫 번째 인덱스까지 검사
	{
		if (i == N - 1)							// 맨 마지막 수는 최대 증가하는 수열이 1임
			d[i][CNT] = 1;
		else 
		{
			for (int j = i; j < N; j++)			// 검사하는 해당 수부터 마지막 인덱스까지 검사
				if (d[j][NUM] > d[i][NUM])		// 검사하는 수보다 큰 수가 있을 경우
					d[i][CNT]=max(d[j][CNT], d[i][CNT]);				//해당 수의 최대 수열의 개수와 검사 수의 수열 개수를 비교하여 큰 값을 최대 수열로 저장
																		//최대 수열을 바로 넣지 않고 비교하여 넣는 이유는 이후에 더 큰 수열이나 작은 수열을 검사할 수 있기 때문
			d[i][CNT]++;						//자기 자신도 수열에 포함되므로 +1
		}
		res = max(d[i][CNT], res);				//증가하는 최대 수열을 매 수마다 반복하여 갱신
	}

	

	cout << res;
}
