# [level 0] [PCCE 기출문제] 2번 / 각도 합치기 - 340206 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/340206) 

### 성능 요약

메모리: 7.44 MB, 시간: 10.79 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 05월 25일 18:03:24

### 문제 설명

<p>일반적으로 두 선분이 이루는 각도는 한 바퀴를 360도로 하여 표현합니다. 따라서 각도에 360의 배수를 더하거나 빼더라도 같은 각을 의미합니다. 예를 들면, 30도와 390도는 같은 각도입니다.</p>

<p>주어진 코드는 각도를 나타내는 두 정수 <code>angle1</code>과 <code>angle2</code>가 주어질 때, 이 두 각의 합을 0도 이상 360도 미만으로 출력하는 코드입니다. 코드가 올바르게 작동하도록 한 줄을 수정해 주세요.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li>0 ≤ <code>angle1</code> ≤ 5000</li>
<li>0 ≤ <code>angle2</code> ≤ 5000</li>
</ul>

<hr>

<h4>입출력 예</h4>

<p>입력 #1</p>
<div class="highlight"><pre class="codehilite"><code>280
485
</code></pre></div>
<p>출력 #1</p>
<div class="highlight"><pre class="codehilite"><code>45
</code></pre></div>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li><code>angle1</code>과 <code>angle2</code>의 합은 765도이고, 765를 720을 빼면 45도이므로 45를 출력합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges