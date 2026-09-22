# [level 0] [PCCE 기출문제] 6번 / 물 부족 - 340202 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/340202) 

### 성능 요약

메모리: 11.4 MB, 시간: 0.03 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 09월 22일 10:25:49

### 문제 설명

<p>ㅇㅇ시에서는 저수지가 하나 있는데, 도시 내에서 사용하는 모든 물은 이 저수지에 저장된 물을 끌어와 사용합니다. 이상 기후로 인해 극심한 가뭄이 예고된 상황에서, 지난 달의 물 사용량과 이번달부터 일정 기간 동안의 월별 물 사용량의 변화를 예측한 값을 이용해 몇 달 뒤 물이 부족해지는지 예측하려고 합니다.<br>
이번달부터의 월별 물 사용량 변화를 예측한 값은 다음과 같이 리스트에 담겨 주어집니다.</p>

<ul>
<li>[10, -10, 10, -10, 10, -10, 10, -10, 10, -10]</li>
<li>리스트의 각 원소는 해당 월의 물 사용량이 전 달에 비해 몇 % 만큼 증가 또는 감소하는지를 나타냅니다.</li>
<li>예를 들어, 이번달의 물 사용량 (리스트의 첫 번째 원소)은 지난 달 보다 10% 증가한 값이며, 다음 달(리스트의 두 번째 원소)의 물 사용량은 이번달 사용량에서 10%만큼 감소한 값입니다.

<ul>
<li>자세한 값은 입출력 예시를 참고해 주세요.</li>
</ul></li>
</ul>

<p>현재 저수지에 저장된 물의 양을 나타내는 정수 <code>storage</code>와 지난 달 물 사용량을 나타내는 정수 <code>usage</code>, 월별 물 사용량이 전 달 대비 어떻게 변하는지 저장된 정수 리스트 <code>change</code>가 주어질 때 몇 달 뒤 물이 부족해지는지 return 하도록 solution 함수를 작성하려 합니다. 코드가 올바르게 작동하도록 한 줄을 수정해 solution 함수를 완성해 주세요. 가뭄이 끝날때 까지 저수지의 물이 남아 있다면 -1을 return합니다.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li>1,000 ≤ <code>storage</code> ≤ 1,000,000</li>
<li>500 ≤ <code>usage</code> ≤ 30,000</li>
<li>1 ≤ <code>change</code>의 길이 ≤ 30

<ul>
<li>-99 ≤ <code>change[i]</code> ≤ 500</li>
<li><code>change[i]</code> 가 양수일 경우 물 사용량은 전 달 보다 <code>change[i]</code>% 만큼 증가합니다.</li>
<li><code>change[i]</code> 가 음수일 경우 물 사용량은 전 달 보다 <code>change[i]</code>% 만큼 감소합니다.</li>
<li><code>change[i]</code> 가 0일 경우 물 사용량은 전 달과 동일합니다.</li>
<li>매달 물 사용량은 소수점 이하를 버린 정수로 계산합니다.</li>
</ul></li>
</ul>

<hr>

<h4>입출력 예</h4>
<table class="table">
        <thead><tr>
<th>storage</th>
<th>usage</th>
<th>change</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>5141</td>
<td>500</td>
<td>[10, -10, 10, -10, 10, -10, 10, -10, 10, -10]</td>
<td>-1</td>
</tr>
<tr>
<td>1000</td>
<td>2000</td>
<td>[-10, 25, -33]</td>
<td>1</td>
</tr>
</tbody>
      </table>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li>매월 물 사용량은 다음과 같습니다. </li>
</ul>
<table class="table">
        <thead><tr>
<th>n개월 뒤</th>
<th>0 (이번 달)</th>
<th>1 (다음 달)</th>
<th>2</th>
<th>3</th>
<th>4</th>
<th>5</th>
<th>6</th>
<th>7</th>
<th>8</th>
<th>9</th>
</tr>
</thead>
        <tbody><tr>
<td>월 별 물 사용량</td>
<td>550</td>
<td>495</td>
<td>544</td>
<td>490</td>
<td>539</td>
<td>485</td>
<td>533</td>
<td>479</td>
<td>526</td>
<td>474</td>
</tr>
<tr>
<td>총 물 사용량</td>
<td>550</td>
<td>1045</td>
<td>1589</td>
<td>2079</td>
<td>2618</td>
<td>3103</td>
<td>3636</td>
<td>4115</td>
<td>4641</td>
<td>5115</td>
</tr>
</tbody>
      </table>
<ul>
<li>예를 들어, 지난 달 물 사용량 <code>usage</code> = 500이므로, 이번달 물 사용량은 10% 증가한 550입니다. 다음 달 물 사용량은 이번달 사용량 550에서 10% 감소한 495 이며, 나머지 달도 동일하게 계산합니다. 9달 뒤까지 계산한 물 사용량은 총 5115 이며, 현재 저수지에 저장된 물의 양은 <code>storage</code> = 5141입니다. 따라서 물이 부족해지지 않으므로 -1을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>총 사용가능한 물의 양이 1000인데 2000 * 0.9 = 1800이 필요하므로 이번 달부터 물이 부족합니다. 따라서 0을 return합니다.</li>
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