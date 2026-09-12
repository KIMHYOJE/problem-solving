# [level 0] 편지 - 120898 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120898) 

### 성능 요약

메모리: 11.2 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 09월 12일 16:55:49

### 문제 설명

<p>머쓱이는 할머니께 생신 축하 편지를 쓰려고 합니다. 할머니가 보시기 편하도록 글자 한 자 한 자를 가로 2cm 크기로 적으려고 하며, 편지를 가로로만 적을 때, 축하 문구 <code>message</code>를 적기 위해 필요한 편지지의 최소 가로길이를 return 하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>공백도 하나의 문자로 취급합니다.</li>
<li>1 ≤ message의 길이 ≤ 50</li>
<li>편지지의 여백은 생각하지 않습니다.</li>
<li><code>message</code>는 영문 알파벳 대소문자, ‘!’, ‘~’ 또는 공백으로만 이루어져 있습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>message</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"happy birthday!"</td>
<td>30</td>
</tr>
<tr>
<td>"I love you~"</td>
<td>22</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>message</code>의 글자 수가 15개로 최소 가로 30cm의 편지지가 필요합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>message</code>의 글자 수가 11개로 최소 가로 22cm의 편지지가 필요합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges