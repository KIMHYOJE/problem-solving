# [level 0] [PCCE 기출문제] 5번 / 심폐소생술 - 340203 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/340203) 

### 성능 요약

메모리: 11.1 MB, 시간: 0.03 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 09월 15일 10:15:40

### 문제 설명

<p>심폐소생술은 다음과 같은 순서를 통해 실시합니다.</p>

<ol>
<li>심정지 및 무호흡 확인 [check]</li>
<li>도움 및 119 신고 요청 [call]</li>
<li>가슴압박 30회 시행 [pressure]</li>
<li>인공호흡 2회 시행 [respiration]</li>
<li>가슴압박, 인공호흡 반복 [repeat]</li>
</ol>

<p>주어진 solution 함수는 심폐소생술을 하는 방법의 순서가 담긴 문자열들이 무작위 순서로 담긴 리스트 <code>cpr</code>이 주어질 때 각각의 방법이 몇 번째 단계인지 순서대로 담아 return하는 함수입니다. solution 함수가 올바르게 작동하도록 빈칸을 채워 solution 함수를 완성해 주세요.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li><code>cpr</code>은 다음 문자열들이 한 번씩 포함되어 있습니다.

<ul>
<li>"check", "call", "pressure", "respiration", "repeat"</li>
</ul></li>
</ul>

<hr>

<h4>입출력 예</h4>
<table class="table">
        <thead><tr>
<th>cpr</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["call", "respiration", "repeat", "check", "pressure"]</td>
<td>[2, 4, 5, 1, 3]</td>
</tr>
<tr>
<td>["respiration", "repeat", "check", "pressure", "call"]</td>
<td>[4, 5, 1, 3, 2]</td>
</tr>
</tbody>
      </table>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li>"call", "respiration", "repeat", "check", "pressure"은 각각 2, 4, 5, 1, 3 번째 순서이므로 [2, 4, 5, 1, 3]을 리턴합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"respiration", "repeat", "check", "pressure", "call"은 각각&nbsp;4, 5, 1, 3, 2&nbsp;번째 순서이므로 [4, 5, 1, 3, 2]를 리턴합니다.</li>
</ul>

<hr>

<ul>
<li>cpp를 응시하는 경우 리스트는 배열과 동일한 의미이니 풀이에 참고해주세요.

<ul>
<li>ex) 번호가 담긴 정수 <u><strong>리스트</strong></u> <code>numbers</code>가 주어집니다. =&gt; 번호가 담긴 정수 <u><strong>배열</strong></u> <code>numbers</code>가 주어집니다.</li>
</ul></li>
<li>java를 응시하는 경우 리스트는 배열, 함수는 메소드와 동일한 의미이니 풀이에 참고해주세요.

<ul>
<li>ex) solution <u><strong>함수</strong></u>가 올바르게 작동하도록 한 줄을 수정해 주세요. =&gt; solution <u><strong>메소드</strong></u>가 올바르게 작동하도록 한 줄을 수정해 주세요.</li>
</ul></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges