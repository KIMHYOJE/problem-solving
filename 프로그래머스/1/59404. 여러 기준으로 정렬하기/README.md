# [level 1] 여러 기준으로 정렬하기 - 59404 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/59404) 

### 성능 요약

메모리: undefined, 시간: 

### 구분

코딩테스트 연습 > SELECT

### 채점결과

합계: 100.0 / 100.0

### 제출 일자

2026년 11월 03일 13:53:46

### 문제 설명

<p><code>ANIMAL_INS</code> 테이블은 동물 보호소에 들어온 동물의 정보를 담은 테이블입니다. <code>ANIMAL_INS</code> 테이블 구조는 다음과 같으며, <code>ANIMAL_ID</code>, <code>ANIMAL_TYPE</code>, <code>DATETIME</code>, <code>INTAKE_CONDITION</code>, <code>NAME</code>, <code>SEX_UPON_INTAKE</code>는 각각 동물의 아이디, 생물 종, 보호 시작일, 보호 시작 시 상태, 이름, 성별 및 중성화 여부를 나타냅니다.</p>
<table class="table">
        <thead><tr>
<th>NAME</th>
<th>TYPE</th>
<th>NULLABLE</th>
</tr>
</thead>
        <tbody><tr>
<td>ANIMAL_ID</td>
<td>VARCHAR(N)</td>
<td>FALSE</td>
</tr>
<tr>
<td>ANIMAL_TYPE</td>
<td>VARCHAR(N)</td>
<td>FALSE</td>
</tr>
<tr>
<td>DATETIME</td>
<td>DATETIME</td>
<td>FALSE</td>
</tr>
<tr>
<td>INTAKE_CONDITION</td>
<td>VARCHAR(N)</td>
<td>FALSE</td>
</tr>
<tr>
<td>NAME</td>
<td>VARCHAR(N)</td>
<td>TRUE</td>
</tr>
<tr>
<td>SEX_UPON_INTAKE</td>
<td>VARCHAR(N)</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p>동물 보호소에 들어온 모든 동물의 아이디와 이름, 보호 시작일을 이름 순으로 조회하는 SQL문을 작성해주세요. 단, 이름이 같은 동물 중에서는 보호를 나중에 시작한 동물을 먼저 보여줘야 합니다.</p>

<h5>예시</h5>

<p>예를 들어, <code>ANIMAL_INS</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>ANIMAL_ID</th>
<th>ANIMAL_TYPE</th>
<th>DATETIME</th>
<th>INTAKE_CONDITION</th>
<th>NAME</th>
<th>SEX_UPON_INTAKE</th>
</tr>
</thead>
        <tbody><tr>
<td>A349996</td>
<td>Cat</td>
<td>2018-01-22 14:32:00</td>
<td>Normal</td>
<td>Sugar</td>
<td>Neutered Male</td>
</tr>
<tr>
<td>A350276</td>
<td>Cat</td>
<td>2017-08-13 13:50:00</td>
<td>Normal</td>
<td>Jewel</td>
<td>Spayed Female</td>
</tr>
<tr>
<td>A396810</td>
<td>Dog</td>
<td>2016-08-22 16:13:00</td>
<td>Injured</td>
<td>Raven</td>
<td>Spayed Female</td>
</tr>
<tr>
<td>A410668</td>
<td>Cat</td>
<td>2015-11-19 13:41:00</td>
<td>Normal</td>
<td>Raven</td>
<td>Spayed Female</td>
</tr>
</tbody>
      </table>
<ol>
<li>이름을 사전 순으로 정렬하면 다음과 같으며, 'Jewel', 'Raven', 'Sugar'</li>
<li>'Raven'이라는 이름을 가진 개와 고양이가 있으므로, 이 중에서는 보호를 나중에 시작한 개를 먼저 조회합니다.</li>
</ol>

<p>따라서 SQL문을 실행하면 다음과 같이 나와야 합니다.</p>
<table class="table">
        <thead><tr>
<th>ANIMAL_ID</th>
<th>NAME</th>
<th>DATETIME</th>
</tr>
</thead>
        <tbody><tr>
<td>A350276</td>
<td>Jewel</td>
<td>2017-08-13 13:50:00</td>
</tr>
<tr>
<td>A396810</td>
<td>Raven</td>
<td>2016-08-22 16:13:00</td>
</tr>
<tr>
<td>A410668</td>
<td>Raven</td>
<td>2015-11-19 13:41:00</td>
</tr>
<tr>
<td>A349996</td>
<td>Sugar</td>
<td>2018-01-22 14:32:00</td>
</tr>
</tbody>
      </table>
<hr>

<p>본 문제는 <a href="https://www.kaggle.com/aaronschlegel/austin-animal-center-shelter-intakes-and-outcomes" target="_blank" rel="noopener">Kaggle의 "Austin Animal Center Shelter Intakes and Outcomes"</a>에서 제공하는 데이터를 사용하였으며 <a href="https://opendatacommons.org/licenses/odbl/1.0/" target="_blank" rel="noopener">ODbL</a>의 적용을 받습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges