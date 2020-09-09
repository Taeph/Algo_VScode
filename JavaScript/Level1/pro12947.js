// 하샤드 수
// https://programmers.co.kr/learn/courses/30/lessons/12947

console.log(solution(10));
console.log(solution(12));
console.log(solution(11));
console.log(solution(13));

function solution(x) {
    var answer = true;
    var temp = 0;
    (x+'').split('').map( val => temp += parseInt(val));

    answer = (x%temp == 0);
    
    return answer;
}