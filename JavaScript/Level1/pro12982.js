// 예산
// https://programmers.co.kr/learn/courses/30/lessons/12982

console.log(solution([1,3,2,5,4], 9));
console.log(solution([2,2,3,3], 10));

// 그리디 알고리즘 아닐까?
function solution(d, budget) {
    var answer = 0;
    var temp = d.sort( (a,b) => a-b ).filter( val => (budget -= val) >= 0);
    answer = temp.length;
    return answer;
}