// 평균 구하기
// https://programmers.co.kr/learn/courses/30/lessons/12944

console.log(solution([1,2,3,4]));
console.log(solution([5,5]));

function solution(arr) {
    var answer = 0;
    arr.map( val => answer += val);
    answer /= arr.length;
    return answer;
}