class Solution {
    public int solution(int n, int k) {
        int answer = 0;
        answer += n * 12000;
        if (n / 10 != 0) {
            answer += (k - n / 10) * 2000;
        } else {
            answer += k * 2000;
        }
        return answer;
    }
}