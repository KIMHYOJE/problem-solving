# [Platinum III] 수열과 쿼리 3 - 13544 

[문제 링크](https://acmicpc.net/problem/13544) 

### 성능 요약

메모리: 23560 KB, 시간: 212 ms

### 분류

자료 구조, 머지 소트 트리, 세그먼트 트리, 정렬

### 제출 일자

2026년 11월 21일 21:51:10

### 문제 설명

<p>길이가 N인 수열 A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>이 주어진다. 이때, 다음 쿼리를 수행하는 프로그램을 작성하시오.</p>

<ul>
	<li><code>i j k</code>: A<sub>i</sub>, A<sub>i+1</sub>, ..., A<sub>j</sub>로 이루어진 부분 수열 중에서 k보다 큰 원소의 개수를 출력한다.</li>
</ul>

### 입력 

 <p>첫째 줄에 수열의 크기 N (1 ≤ N ≤ 100,000)이 주어진다.</p>

<p>둘째 줄에는 A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>이 주어진다. (1 ≤ A<sub>i</sub> ≤ 10<sup>9</sup>)</p>

<p>셋째 줄에는 쿼리의 개수 M (1 ≤ M ≤ 100,000)이 주어진다.</p>

<p>넷째 줄부터 M개의 줄에는 a, b, c가 주어진다. a, b, c를 이용해 쿼리를 만들어야 한다.</p>

<ul>
	<li>i = a xor last_ans</li>
	<li>j = b xor last_ans</li>
	<li>k = c xor last_ans</li>
</ul>

<p>last_ans는 이전 쿼리의 정답이며, 가장 처음에는 0이다. xor한 결과는 1 ≤ i ≤ j ≤ n, 1 ≤ k ≤ 10<sup>9</sup> 을 만족한다.</p>

### 출력 

 <p>각각의 쿼리마다 정답을 한 줄에 하나씩 출력한다.</p>

