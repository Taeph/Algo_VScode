// x만큼 간격이 있는 n개의 숫자
// https://programmers.co.kr/learn/courses/30/lessons/12954

console.log(solution(2,5));
console.log(solution(4,3));
console.log(solution(-4,2));
console.log(solution(0,1));
console.log(solution(4,1));

// 뭐가 틀린지 잘 모르겠다 (14번 테스트케이스 통과 못함)
function solution(x, n) {
    var answer = [];

    for( var i=1; i<=n; i++) {
        answer.push(x*i);
    }
    return answer;
}