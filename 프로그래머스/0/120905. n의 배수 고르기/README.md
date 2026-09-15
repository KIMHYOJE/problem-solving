# [level 0] n의 배수 고르기 - 120905 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120905) 

### 성능 요약

메모리: 11.4 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 09월 15일 11:30:38

### 문제 설명

<p>정수 <code>n</code>과 정수 배열 <code>numlist</code>가 매개변수로 주어질 때, <code>numlist</code>에서 <code>n</code>의 배수가 아닌 수들을 제거한 배열을 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>n</code> ≤ 10,000</li>
<li>1 ≤ <code>numlist</code>의 크기 ≤ 100</li>
<li>1 ≤ <code>numlist</code>의 원소 ≤ 100,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>numlist</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>[4, 5, 6, 7, 8, 9, 10, 11, 12]</td>
<td>[6, 9, 12]</td>
</tr>
<tr>
<td>5</td>
<td>[1, 9, 3, 10, 13, 5]</td>
<td>[10, 5]</td>
</tr>
<tr>
<td>12</td>
<td>[2, 100, 120, 600, 12, 12]</td>
<td>[120, 600, 12, 12]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>numlist</code>에서 3의 배수만을 남긴 [6, 9, 12]를 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>numlist</code>에서 5의 배수만을 남긴 [10, 5]를 return합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li><code>numlist</code>에서 12의 배수만을 남긴 [120, 600, 12, 12]를 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges