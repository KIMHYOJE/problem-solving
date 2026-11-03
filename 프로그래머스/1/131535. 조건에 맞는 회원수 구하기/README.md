# [level 1] 조건에 맞는 회원수 구하기 - 131535 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131535) 

### 성능 요약

메모리: undefined, 시간: 

### 구분

코딩테스트 연습 > SELECT

### 채점결과

합계: 100.0 / 100.0

### 제출 일자

2026년 11월 03일 14:00:05

### 문제 설명

<p>다음은 어느 의류 쇼핑몰에 가입한 회원 정보를 담은 <code>USER_INFO</code> 테이블입니다. <code>USER_INFO</code> 테이블은 아래와 같은 구조로 되어있으며 <code>USER_ID</code>, <code>GENDER</code>, <code>AGE</code>, <code>JOINED</code>는 각각 회원 ID, 성별, 나이, 가입일을 나타냅니다.</p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>USER_ID</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
<tr>
<td>GENDER</td>
<td>TINYINT(1)</td>
<td>TRUE</td>
</tr>
<tr>
<td>AGE</td>
<td>INTEGER</td>
<td>TRUE</td>
</tr>
<tr>
<td>JOINED</td>
<td>DATE</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p><code>GENDER</code> 컬럼은 비어있거나 0 또는 1의 값을 가지며 0인 경우 남자를, 1인 경우는 여자를 나타냅니다.</p>

<hr>

<h5>문제</h5>

<p><code>USER_INFO</code> 테이블에서 2021년에 가입한 회원 중 나이가 20세 이상 29세 이하인 회원이 몇 명인지 출력하는 SQL문을 작성해주세요.</p>

<hr>

<h5>예시</h5>

<p>예를 들어 <code>USER_INFO</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>USER_ID</th>
<th>GENDER</th>
<th>AGE</th>
<th>JOINED</th>
</tr>
</thead>
        <tbody><tr>
<td>1</td>
<td>1</td>
<td>26</td>
<td>2021-10-05</td>
</tr>
<tr>
<td>2</td>
<td>0</td>
<td>NULL</td>
<td>2021-11-25</td>
</tr>
<tr>
<td>3</td>
<td>1</td>
<td>22</td>
<td>2021-11-30</td>
</tr>
<tr>
<td>4</td>
<td>0</td>
<td>31</td>
<td>2021-12-03</td>
</tr>
<tr>
<td>5</td>
<td>0</td>
<td>28</td>
<td>2021-12-16</td>
</tr>
<tr>
<td>6</td>
<td>1</td>
<td>24</td>
<td>2022-01-03</td>
</tr>
<tr>
<td>7</td>
<td>1</td>
<td>NULL</td>
<td>2022-01-09</td>
</tr>
</tbody>
      </table>
<p>2021년에 가입한 회원 중 나이가 20세 이상 29세 이하인 회원은 <code>USER_ID</code> 가 1, 3, 5 인 회원들 이므로, 다음과 같이 결과가 나와야 합니다.</p>
<table class="table">
        <thead><tr>
<th>USERS</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges