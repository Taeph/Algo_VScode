// 제일 작은 수 제거하기
// https://programmers.co.kr/learn/courses/30/lessons/12935

console.log(solution([4,3,2,1]));
console.log(solution([4,1,2,3]));
console.log(solution([10,0,2,1,3]));
console.log(solution([10]));

function solution(arr) {
    var answer = [];
    var temp = arr.slice();
    
    var min = temp.sort( (a,b) => b-a ).pop();
    answer = arr.filter( (val) => val != min);
    answer.length == 0 ? answer.push(-1) : 0;

    return answer;
}