# 1023 문제 풀이
소수를 입력 받는다. 입력은 소수 이지만, 사실상 정수 입력이다. <br/>
문제는 다음과 같다. <br/>
<pre>
실수 한 개를 입력받는다.

입력 받은 실수를 정수 부분과 실수 부분으로 나누어 따로 출력한다.
</pre>
문제 이해가 안된다면 예시를 들어줄테니 이번에는 이해를 하길 바란다.
1.414213 를 입력하면 출력은 
1 <br/>
414213 <br/>
이와 같이 출력이 되어야 한다. <br/>
짜짜잔 이제 코드 설명이다. 이 문제는 소수를 입력한다고 해도 소수로 입력을 받으면 안된다. <br/>
1.414213을 입력 할때 1 하고 414213은 다른 숫자로 봐야한다는 것이다. <br/>
그러므로 입력을 받을때 scanf("%d.%d", &a, &b); 와 같이 정수입력.정수입력 이렇게 받아야 한다는 것이다. <br/>
