// 최대값과 최솟값
// https://programmers.co.kr/learn/courses/30/lessons/12939

console.log( solution("1 2 3 4") );

function solution(s) {
    let answer = '';
    let arr = s.split(' ');
    arr.sort( (a,b) => a - b);

    answer += arr[0] + ' ' + arr[arr.length - 1];
    return answer;
}