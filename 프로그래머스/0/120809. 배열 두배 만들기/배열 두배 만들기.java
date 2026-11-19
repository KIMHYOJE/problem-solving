class Solution {
    public int[] solution(int[] numbers) {
        // numbers와 동일한 길이의 결과 배열 생성
        int[] answer = new int[numbers.length];
        
        // 각 원소를 순회하며 2를 곱한 값을 저장
        for (int i = 0; i < numbers.length; i++) {
            answer[i] = numbers[i] * 2;
        }
        
        return answer;
    }
}