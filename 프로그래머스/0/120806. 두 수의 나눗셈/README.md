# [level 0] 두 수의 나눗셈 - 120806 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120806) 

### 성능 요약

메모리: 11.4 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 09월 11일 17:03:07

### 문제 설명

<p>정수 <code>num1</code>과 <code>num2</code>가 매개변수로 주어질 때, <code>num1</code>을 <code>num2</code>로 나눈 값에 1,000을 곱한 후 정수 부분을 return 하도록 solution 함수를 완성해주세요.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li>0 &lt; <code>num1</code> ≤ 100</li>
<li>0 &lt; <code>num2</code> ≤ 100</li>
</ul>

<hr>

<h4>입출력 예</h4>
<table class="table">
        <thead><tr>
<th>num1</th>
<th>num2</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>2</td>
<td>1500</td>
</tr>
<tr>
<td>7</td>
<td>3</td>
<td>2333</td>
</tr>
<tr>
<td>1</td>
<td>16</td>
<td>62</td>
</tr>
</tbody>
      </table>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li><code>num1</code>이 3, <code>num2</code>가 2이므로 3 / 2 = 1.5에 1,000을 곱하면 1500이 됩니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>num1</code>이 7, <code>num2</code>가 3이므로 7 / 3 = 2.33333...에 1,000을 곱하면 2333.3333.... 이 되며, 정수 부분은 2333입니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li><code>num1</code>이 1, <code>num2</code>가 16이므로 1 / 16 = 0.0625에 1,000을 곱하면 62.5가 되며, 정수 부분은 62입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges