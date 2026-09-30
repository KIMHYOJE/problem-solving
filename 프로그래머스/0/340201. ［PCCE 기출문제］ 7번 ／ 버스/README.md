# [level 0] [PCCE 기출문제] 7번 / 버스 - 340201 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/340201) 

### 성능 요약

메모리: 11.4 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 09월 30일 14:58:37

### 문제 설명

<p>영진이는 약속장소에 가기 위해 버스를 타려고 합니다. 버스에는 좌석이 총 <code>seat</code>개만큼 있습니다. 영진이는 버스 좌석에 앉아서 갈 수 있을지 궁금해합니다. 기점에서 출발한 버스가 영진이가 기다리는 정거장에 도착하기 전에 방문하는  각 정거장에서 승/하차한 승객 정보가 주어질 때, 영진이가 버스에 탄 순간 빈 좌석은 몇 개인지 구해주세요. 영진이가 기다리는 정거장에서는 영진이가 제일 먼저 버스에 탑승하며, 이전 정거장에서 버스에 탑승한 승객들은 남는 좌석이 있다면 항상 앉는다고 가정합니다. 또, 기점에서 출발하는 버스에는 승객이 0명 타고 있습니다.</p>

<p>예를 들어 다음은 좌석이 5개인 버스에 각 정거장에서 승/하차한 승객 정보를 나타냅니다. 영진이는 4번 정거장에서 기다리고 있으며, "On"은 승차한 승객, "Off"는 하차한 승객을 의미합니다.</p>
<div class="highlight"><pre class="codehilite"><code>- 1번 정거장 : ["On", "On", "On"] (3명 승차, 0명 하차)
- 2번 정거장 : ["Off", "On", "-"] (1명 승차, 1명 하차)
- 3번 정거장 : ["Off", "-", "-"]  (0명 승차, 1명 하차)
</code></pre></div>
<p>위와 같은 경우, 1번 정거장에서 3명이 승차하고, 2번 정거장에서 1명 승차 1명 하차, 3번 정거장에서 1명이 하차했으므로 4번 정거장에 도착한 버스에는 2명이 타고 있습니다. 4번 정거장에서는 영진이가 가장 먼저 탑승하므로, 남아있는 좌석 수는 3개입니다.</p>

<p>주어진 solution함수는 버스의 좌석 개수 <code>seat</code>, 기점에서 출발한 버스가 순서대로 방문한 정거장에서 승객이 승/하차한 정보를 담은 2차원 문자열 리스트 <code>passengers</code>가 주어질 때, 버스에 남아있는 좌석의 개수를 return 하는 함수입니다. solution 함수가 올바르게 작동하도록 빈칸을 채워 solution함수를 완성해 주세요.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li>1 ≤ <code>seat</code> ≤ 30</li>
<li>1 ≤ <code>passengers</code>의 길이 ≤ 10</li>
<li>1 ≤ <code>passengers[i]</code>의 길이 ≤ 20

<ul>
<li><code>passengers[0]</code>은 1번 정거장, <code>passengers[1]</code>은 2번 정거장, … <code>passengers[i]</code>는 i + 1번 정거장의 정보입니다.</li>
<li><code>passengers</code>의 길이가 n이라면, 영진이는 n + 1번 정거장에서 기다리고 있습니다.</li>
</ul></li>
<li><code>passengers[i]</code>의 길이는 모두 동일합니다.</li>
<li><code>passengers[i]</code>의 원소는 "On", "Off" 또는 "-"입니다.

<ul>
<li>"-"는 배열의 가로(열) 길이를 맞추기 위한 요소로, 아무런 의미도 없습니다.</li>
<li>"-"가 "On", "Off" 사이에 있는 경우는 없습니다.</li>
</ul></li>
</ul>

<hr>

<h4>입출력 예</h4>
<table class="table">
        <thead><tr>
<th>seat</th>
<th>passengers</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>5</td>
<td>[["On", "On", "On"], ["Off", "On", "-"], ["Off", "-", "-"]]</td>
<td>3</td>
</tr>
<tr>
<td>10</td>
<td>[["On", "On", "On", "On", "On", "On", "On", "On", "-", "-"], ["On", "On", "Off", "Off", "Off", "On", "On", "-", "-", "-"], ["On", "On", "On", "Off", "On", "On", "On", "Off", "Off", "Off"], ["On", "On", "Off", "-", "-", "-", "-", "-", "-", "-"]]</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li>지문과 동일합니다</li>
</ul>

<p>입출력 예 #2</p>

<p>아래와 같이 승객이 타고 내렸고 마지막으로 12명이 버스에 타고 있으므로 남은 좌석은 0개입니다.</p>
<div class="highlight"><pre class="codehilite"><code>- 1번 정거장 : ["On", "On", "On", "On", "On", "On", "On", "On", "-", "-"] (8명 승차, 0명 하차)
- 2번 정거장 : ["On", "On", "Off", "Off", "Off", "On", "On", "-", "-", "-"] (4명 승차, 3명 하차)
- 3번 정거장 : ["On", "On", "On", "Off", "On", "On", "On", "Off", "Off", "Off"] (6명 승차, 4명 하차)
- 4번 정거장 : ["On", "On", "Off", "-", "-", "-", "-", "-", "-", "-"] (2명 승차, 1명 하차)
</code></pre></div>
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