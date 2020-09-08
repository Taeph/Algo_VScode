// 문자열 내림차순으로 배치하기
// https://programmers.co.kr/learn/courses/30/lessons/12917

console.log(solution('ZbcAdefg'));

function solution(s) {
    var answer = '';
    var arr = new Array();

    for( var i in s) {
        arr.push(s[i].charCodeAt());
    }
    arr.sort( (a,b) => b - a);

    for( var i in arr) {
        answer += String.fromCharCode(arr[i]);
    }

    // 누군가의 풀이.. 심플하다 
    // 문자열을 split('')으로 배열로 만들고, sort()로 오름차순 정렬 후, reverse()를 사용해서 내림차순 정렬로 만들고, join('')을 사용해서 붙여준다...
    // answer = s.split('').sort().reverse().join('');

    
    return answer;
}