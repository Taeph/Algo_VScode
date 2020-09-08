// 문자열 다루기 기본
// https://programmers.co.kr/learn/courses/30/lessons/12918

console.log(solution('0123456789'));
console.log(solution('1234'));
console.log(solution('123456'));
console.log(solution('1b34'));
console.log(solution('1a34a6'));

function solution(s) {
    var answer = true;

    var cnt = 0;
    if (s.length == 4 || s.length == 6) {
        for( var i in s) {
            if( s[i].charCodeAt() < 60) {
                cnt++;
            }
        }
        cnt == s.length ? answer = true : answer = false;
    } else {
        answer = false;
    }
    
    return answer;
}