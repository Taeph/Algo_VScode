// 카펫
// https://programmers.co.kr/learn/courses/30/lessons/42842

console.log( solution(10,2) );
console.log( solution(8,1) );
console.log( solution(24,24) );

// 완전탐색 문제라 간단했다..
function solution(brown, yellow) {
    var answer = [];
    var width=0;
    var height=0;
    for(var i=1; i<=yellow; i++) {
        var temp = yellow/i;
        if( yellow%i == 0) {
            width = Math.max(temp,i);
            height = Math.min(temp,i);
            if(width*2 + height*2 + 4 == brown) {
                break;
            }
        } else {
            continue;
        }
    }
    console.log(width, height);
    answer.push(width + 2);
    answer.push(height + 2);
    return answer;
}