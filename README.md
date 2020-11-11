# 알고리즘 공부

- Baekjoon Online judge
  - https://www.acmicpc.net/user/terec


- Solved.ac
  - https://solved.ac/profile/terec


## 시간복잡도
- 시간복잡도
  -- 시간복잡도는 입력에 따라 프로그램이 동작하는 연산속도를 정의
  -- 시간복잡도를 지정할 때 최악의 경우(worst case)를 기준으로 작성함

- Big-O 표기법
  -- 시간복잡도를 수식으로 표현
  -- 상수는 식에서 제외, 최고차항의 계수를 갖도록 표현 (예 : n^3 + 50n^2 + 100n + 1000 -> O(n^3)
  -- 시간복잡도를 고려한 알고리즘 작성이 필요
  


![complexity](https://github.com/cherrytomato1/Algorithm/blob/master/images/time_complexity.png)


## C++

### input/output

 - using namespace std;
    - iostream에 정의되어있는 std namespace를 사용한다는 뜻 cin, cout등의 namespace에서 std를 생략하여 활용하기 위함
    
 - ios_base :: sync_with_stdio(false)
    - c stream과 c++ stream의 동기화를 끊음, 따라서 독립적인 버퍼를 갖게되어 실행속도는 상승
    - c 와 c++의 stream을 혼용할 수 없음(scanf, cin 등) 
    
 - cin.tie(NULL), cout.tie(NULL)
    - cin과 cout의 동기화를 해제(null)로 지정.
    - cin, cout은 각각의 동작에서 동기화됨으로써 buffer 및 flush를 동작 이를 해제하여 동작속도를 향상시킬 수 있음
    - 동기화 해제 시 자동으로 flush하지 않으므로 in/out stream에 버퍼가 남아 있을 수 있음
    
 https://su-m.tistory.com/7
 
 https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
  
