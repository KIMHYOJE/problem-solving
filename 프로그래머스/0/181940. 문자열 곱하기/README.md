# [level 0] 문자열 곱하기 - 181940 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181940) 

### 성능 요약

메모리: 11.3 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 10월 06일 10:28:10

### 문제 설명

<p>문자열 <code>my_string</code>과 정수 <code>k</code>가 주어질 때, <code>my_string</code>을 <code>k</code>번 반복한 문자열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>my_string</code>의 길이 ≤ 100</li>
<li><code>my_string</code>은 영소문자로만 이루어져 있습니다.</li>
<li>1 ≤ <code>k</code> ≤ 100</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>my_string</th>
<th>k</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"string"</td>
<td>3</td>
<td>"stringstringstring"</td>
</tr>
<tr>
<td>"love"</td>
<td>10</td>
<td>"lovelovelovelovelovelovelovelovelovelove"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>my_string</code>은 "string"이고 이를 3번 반복한 문자열은 "stringstringstring"이므로 이를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>my_string</code>은 "love"이고 이를 10번 반복한 문자열은 "lovelovelovelovelovelovelovelovelovelove"이므로 이를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges