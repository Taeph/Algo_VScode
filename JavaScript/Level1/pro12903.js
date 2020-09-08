// 가운데 글자 가져오기
// https://programmers.co.kr/learn/courses/30/lessons/12903


console.log(solution('abcde'));
console.log(solution('qwer'));


function solution(s) {
    var answer = '';
    var temp = (s.length % 2 != 0) ? s[Math.floor(s.length/2)] : s[s.length/2 - 1] + s[s.length/2];
    answer = temp;
    return answer;
}