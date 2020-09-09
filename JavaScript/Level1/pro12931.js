// 자릿수 더하기
// https://programmers.co.kr/learn/courses/30/lessons/12931

console.log(solution(123));

function solution(n) {
    var answer = 0;
    var arr = String(n).split('');

    for(var i in arr) {
        answer += parseInt(arr[i]);
    }

    return answer;
}