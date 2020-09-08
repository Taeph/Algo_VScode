// 나누어 떨어지는 숫자 배열
// https://programmers.co.kr/learn/courses/30/lessons/12910


console.log(solution([5,9,7,10], 5));
console.log(solution([2,36,1,3], 1));
console.log(solution([3,2,6], 10));

function solution(arr, divisor) {
    var answer = [];

    answer = arr.filter( (item) => { return item % divisor == 0 } );

    answer.length == 0 ? answer.push(-1) : answer.sort( (a,b) => { return a - b } );

    return answer;
}