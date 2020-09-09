// 정수 내림차순으로 배치하기
// https://programmers.co.kr/learn/courses/30/lessons/12933

console.log(solution(118372));

function solution(n) {
    var answer = 0;
    var temp = (n+'').split('').sort( (a,b) => b - a).join('');
    answer = parseInt(temp);
    return answer;
}