# [level 0] 점의 위치 구하기 - 120841 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120841) 

### 성능 요약

메모리: 11.3 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 09월 12일 15:48:48

### 문제 설명

<p>사분면은 한 평면을 x축과 y축을 기준으로 나눈 네 부분입니다. 사분면은 아래와 같이 1부터 4까지 번호를매깁니다.<br>
<img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/b58d4788-42fa-44fa-af50-481907e65473/%E1%84%89%E1%85%B3%E1%84%8F%E1%85%B3%E1%84%85%E1%85%B5%E1%86%AB%E1%84%89%E1%85%A3%E1%86%BA%202022-07-07%20%E1%84%8B%E1%85%A9%E1%84%92%E1%85%AE%203.27.04%20%E1%84%87%E1%85%A9%E1%86%A8%E1%84%89%E1%85%A1%E1%84%87%E1%85%A9%E1%86%AB.png" title="" alt="스크린샷 2022-07-07 오후 3.27.04 복사본.png"></p>

<ul>
<li>x 좌표와 y 좌표가 모두 양수이면 제1사분면에 속합니다.</li>
<li>x 좌표가 음수, y 좌표가 양수이면 제2사분면에 속합니다.</li>
<li>x 좌표와 y 좌표가 모두 음수이면 제3사분면에 속합니다.</li>
<li>x 좌표가 양수, y 좌표가 음수이면 제4사분면에 속합니다.</li>
</ul>

<p>x  좌표 (x, y)를 차례대로 담은 정수 배열 <code>dot</code>이 매개변수로 주어집니다. 좌표 <code>dot</code>이 사분면 중 어디에 속하는지 1, 2, 3, 4 중 하나를 return 하도록 solution 함수를 완성해주세요.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li><code>dot</code>의 길이 = 2</li>
<li><code>dot[0]</code>은 x좌표를, <code>dot[1]</code>은 y좌표를 나타냅니다</li>
<li>-500 ≤ <code>dot</code>의 원소 ≤ 500</li>
<li><code>dot</code>의 원소는 0이 아닙니다. </li>
</ul>

<hr>

<h4>입출력 예</h4>
<table class="table">
        <thead><tr>
<th>dot</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[2, 4]</td>
<td>1</td>
</tr>
<tr>
<td>[-7, 9]</td>
<td>2</td>
</tr>
</tbody>
      </table>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li><code>dot</code>이 [2, 4]로 x 좌표와 y 좌표 모두 양수이므로 제 1 사분면에 속합니다. 따라서 1을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>dot</code>이 [-7, 9]로 x 좌표가 음수, y 좌표가 양수이므로 제 2 사분면에 속합니다. 따라서 2를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges