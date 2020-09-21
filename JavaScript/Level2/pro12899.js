// 124 나라의 숫자
// https://programmers.co.kr/learn/courses/30/lessons/12899

console.log(solution(29));

// 3진수를 생각해서 풀어야함 - 규칙 찾기
function solution(n) {
    var answer = '';
    var temp = [1,2,4];
    
    while(n != 0) {
        var leftNum = n%3;
        if(leftNum == 0) {
            answer += '4';
        } else {
            answer += leftNum + '';    
        }

        if(leftNum == 0) {
            n = Math.floor(n/3) - 1;
        } else {
            n = Math.floor(n/3);
        }
    }
    answer = answer.split('').reverse().join('');

    return answer;
}
