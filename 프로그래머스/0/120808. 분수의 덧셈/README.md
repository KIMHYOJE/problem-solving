# [level 0] 분수의 덧셈 - 120808 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120808) 

### 성능 요약

메모리: 5.01 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 10월 01일 16:24:40

### 문제 설명

<p>첫 번째 분수의 분자와 분모를 뜻하는 <code>numer1</code>, <code>denom1</code>, 두 번째 분수의 분자와 분모를 뜻하는 <code>numer2</code>, <code>denom2</code>가 매개변수로 주어집니다. 두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>0 &lt;<code>numer1</code>, <code>denom1</code>,&nbsp;<code>numer2</code>, <code>denom2</code> &lt; 1,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>numer1</th>
<th>denom1</th>
<th>numer2</th>
<th>denom2</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>1</td>
<td>2</td>
<td>3</td>
<td>4</td>
<td>[5, 4]</td>
</tr>
<tr>
<td>9</td>
<td>2</td>
<td>1</td>
<td>3</td>
<td>[29, 6]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>1 / 2 + 3 / 4 = 5 / 4입니다. 따라서 [5, 4]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>9 / 2 + 1 / 3 = 29 / 6입니다. 따라서 [29, 6]을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges