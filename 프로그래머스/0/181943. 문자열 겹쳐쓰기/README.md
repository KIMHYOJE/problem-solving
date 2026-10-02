# [level 0] 문자열 겹쳐쓰기 - 181943 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181943) 

### 성능 요약

메모리: 11.2 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 10월 02일 09:43:46

### 문제 설명

<p>문자열 <code>my_string</code>, <code>overwrite_string</code>과 정수 <code>s</code>가 주어집니다. 문자열 <code>my_string</code>의 인덱스 <code>s</code>부터 <code>overwrite_string</code>의 길이만큼을 문자열 <code>overwrite_string</code>으로 바꾼 문자열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>my_string</code>와 <code>overwrite_string</code>은 숫자와 알파벳으로 이루어져 있습니다.</li>
<li>1 ≤ <code>overwrite_string</code>의 길이 ≤ <code>my_string</code>의 길이 ≤ 1,000</li>
<li>0 ≤ <code>s</code> ≤ <code>my_string</code>의 길이 - <code>overwrite_string</code>의 길이</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>my_string</th>
<th>overwrite_string</th>
<th>s</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"He11oWor1d"</td>
<td>"lloWorl"</td>
<td>2</td>
<td>"HelloWorld"</td>
</tr>
<tr>
<td>"Program29b8UYP"</td>
<td>"merS123"</td>
<td>7</td>
<td>"ProgrammerS123"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>my_string</code>에서 인덱스 2부터 <code>overwrite_string</code>의 길이만큼에 해당하는 부분은 "11oWor1"이고 이를 "lloWorl"로 바꾼 "HelloWorld"를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>my_string</code>에서 인덱스 7부터 <code>overwrite_string</code>의 길이만큼에 해당하는 부분은 "29b8UYP"이고 이를 "merS123"로 바꾼 "ProgrammerS123"를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges