// 피보나치 수
// https://programmers.co.kr/learn/courses/30/lessons/12945

console.log( solution(100000) );

// 큰 숫자 표현하는 경우 BigInt() 사용
// BigInt() 끼리만 연산 가능
function solution(n) {
    let answer = 0;
    let arr = new Array();
    arr.push(BigInt(0));
    arr.push(BigInt(1));

    for(let i=2; i<=n; i++) {
        let temp = arr[i-2] + arr[i-1];
        arr.push(BigInt(temp));
    }

    answer = arr[arr.length-1] % BigInt(1234567);

    return answer;
}