// 문자열 내 p와 y의 개수
// https://programmers.co.kr/learn/courses/30/lessons/12916

console.log(solution('pPoooyY'));
console.log(solution('pYy'));

function solution(s){
    var answer = true;
    s = s.toUpperCase();

    // arr.split(param) - 괄호안의 값으로 배열을 나누어 주는 것
    // console.log(s.split('Y').length);
    // console.log(s.split('P').length);

    var yCnt = 0;
    var pCnt = 0;

    for( var i in s ){
        s[i] === 'Y' ? yCnt++ : s[i] === 'P' ? pCnt++ : 0;
    }

    yCnt == pCnt ? answer = true : answer = false;

    return answer;
}