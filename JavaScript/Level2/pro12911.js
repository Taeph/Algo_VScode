// 다음 큰 숫자
// https://programmers.co.kr/learn/courses/30/lessons/12911

console.log( solution(78) );

function solution(n) {
    let answer = 0;
    let dec = n;
    let base = 0;

    while(1) {
        var decToBinary = dec.toString(2);
        var count = 0;

        for(let i of decToBinary) {
            if(i == 1) {
                count++;
            }
        }
        if(dec == n) {
            base = count;
        } else {
            if(count == base) {
                break;
            }
        }
        dec++;
    }

    answer = dec;

    return answer;
}