// 최솟값 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12941

console.log( solution([1,4,2], [5,4,4]) );

function solution(A,B){
    let answer = 0;

    let arrA = A.sort( (a,b) => a - b);
    let arrB = B.sort( (a,b) => b - a);

    for(let i in arrA) {
        answer += arrA[i] * arrB[i];
    }

    return answer;
}