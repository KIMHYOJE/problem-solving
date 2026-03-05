# [Silver I] 미로 탐색 - 2178 

[문제 링크](https://www.acmicpc.net/problem/2178) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

그래프 이론, 그래프 탐색, 너비 우선 탐색, 격자 그래프

### 제출 일자

2026년 3월 5일 13:26:55

### 문제 설명

<p>N×M크기의 배열로 표현되는 미로가 있다.</p>

<table class="table table-bordered" style="width:18%">
	<tbody>
		<tr>
			<td style="width:3%">1</td>
			<td style="width:3%">0</td>
			<td style="width:3%">1</td>
			<td style="width:3%">1</td>
			<td style="width:3%">1</td>
			<td style="width:3%">1</td>
		</tr>
		<tr>
			<td>1</td>
			<td>0</td>
			<td>1</td>
			<td>0</td>
			<td>1</td>
			<td>0</td>
		</tr>
		<tr>
			<td>1</td>
			<td>0</td>
			<td>1</td>
			<td>0</td>
			<td>1</td>
			<td>1</td>
		</tr>
		<tr>
			<td>1</td>
			<td>1</td>
			<td>1</td>
			<td>0</td>
			<td>1</td>
			<td>1</td>
		</tr>
	</tbody>
</table>

<p>미로에서 1은 이동할 수 있는 칸을 나타내고, 0은 이동할 수 없는 칸을 나타낸다. 이러한 미로가 주어졌을 때, (1, 1)에서 출발하여 (N, M)의 위치로 이동할 때 지나야 하는 최소의 칸 수를 구하는 프로그램을 작성하시오. 한 칸에서 다른 칸으로 이동할 때, 서로 인접한 칸으로만 이동할 수 있다.</p>

<p>위의 예에서는 15칸을 지나야 (N, M)의 위치로 이동할 수 있다. 칸을 셀 때에는 시작 위치와 도착 위치도 포함한다.</p>

### 입력 

 <p>첫째 줄에 두 정수 N, M(2 ≤ N, M ≤ 100)이 주어진다. 다음 N개의 줄에는 M개의 정수로 미로가 주어진다. 각각의 수들은 <strong>붙어서</strong> 입력으로 주어진다.</p>

### 출력 

 <p>첫째 줄에 지나야 하는 최소의 칸 수를 출력한다. 항상 도착위치로 이동할 수 있는 경우만 입력으로 주어진다.</p>

