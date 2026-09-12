# [level 0] 숨어있는 숫자의 덧셈 (1) - 120851 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120851) 

### 성능 요약

메모리: 11.3 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 09월 12일 16:02:27

### 문제 설명

<p>문자열 <code>my_string</code>이 매개변수로 주어집니다. <code>my_string</code>안의 모든 자연수들의 합을 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>my_string</code>의 길이&nbsp;≤ 1,000</li>
<li><code>my_string</code>은 소문자, 대문자 그리고 한자리 자연수로만 구성되어있습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>my_string</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"aAb1B2cC34oOp"</td>
<td>10</td>
</tr>
<tr>
<td>"1a2b3c4d123"</td>
<td>16</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>"aAb1B2cC34oOp"안의 한자리 자연수는 1, 2, 3, 4 입니다. 따라서 1 + 2 + 3 + 4 = 10 을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"1a2b3c4d123Z"안의 한자리 자연수는 1, 2, 3, 4, 1, 2, 3 입니다. 따라서 1 + 2 + 3 + 4 + 1 + 2 + 3 = 16 을 return합니다.</li>
</ul>

<hr>

<h5>유의사항</h5>

<ul>
<li>연속된 숫자도 각각 한 자리 숫자로 취급합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges