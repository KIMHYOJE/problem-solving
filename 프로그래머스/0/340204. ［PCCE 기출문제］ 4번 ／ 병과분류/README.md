# [level 0] [PCCE 기출문제] 4번 / 병과분류 - 340204 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/340204) 

### 성능 요약

메모리: 7.17 MB, 시간: 10.75 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2026년 05월 25일 19:40:28

### 문제 설명

<p>퓨쳐종합병원에서는 접수한 환자가 진료받을 병과에 따라 자동으로 환자 코드를 부여해 주는 프로그램이 있습니다. 환자 코드의 마지막 네 글자를 보면 환자가 어디 병과에서 진료를 받아야 할지 알 수 있습니다. 예를 들어 환자의 코드가 "_eye"로 끝난다면 안과를, "head"로 끝난다면 신경외과 진료를 보게 됩니다. 환자 코드의 마지막 글자에 따른 병과 분류 기준은 다음과 같습니다. </p>
<table class="table">
        <thead><tr>
<th>마지막 글자</th>
<th>병과</th>
</tr>
</thead>
        <tbody><tr>
<td>"_eye"</td>
<td>"Ophthalmologyc"</td>
</tr>
<tr>
<td>"head"</td>
<td>"Neurosurgery"</td>
</tr>
<tr>
<td>"infl"</td>
<td>"Orthopedics"</td>
</tr>
<tr>
<td>"skin"</td>
<td>"Dermatology"</td>
</tr>
</tbody>
      </table>
<p>환자의 코드를 나타내는 문자열 <code>code</code>를 입력받아 위 표에 맞는 병과를 출력하도록 빈칸을 채워 코드를 완성해 주세요. 위 표의 단어로 끝나지 않는다면 "direct recommendation"를 출력합니다. </p>

<hr>

<h4>제한사항</h4>

<ul>
<li>4 ≤ <code>code</code>의 길이 ≤ 20</li>
<li><code>code</code>는 영어 소문자와 숫자, 언더바("_")로 이루어져 있습니다.</li>
</ul>

<hr>

<h4>입출력 예</h4>

<p>입력 #1 </p>
<div class="highlight"><pre class="codehilite"><code>dry_eye
</code></pre></div>
<p>출력 #1 </p>
<div class="highlight"><pre class="codehilite"><code>Ophthalmologyc
</code></pre></div>
<p>입력 #2 </p>
<div class="highlight"><pre class="codehilite"><code>pat23_08_20_head
</code></pre></div>
<p>출력 #2 </p>
<div class="highlight"><pre class="codehilite"><code>Neurosurgery
</code></pre></div>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1 </p>

<ul>
<li><code>code</code>가 "_eye"로 끝나기 때문에 "Ophthalmologyc"를 출력합니다. </li>
</ul>

<p>입출력 예 #2 </p>

<ul>
<li><code>code</code>가 "head"로 끝나기 때문에 "Neurosurgery"를 출력합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges