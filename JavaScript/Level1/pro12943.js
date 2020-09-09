// 콜라츠 추측
// https://programmers.co.kr/learn/courses/30/lessons/12943

console.log(solution(6));
console.log(solution(16));
console.log(solution(626331));

function solution(num) {
    var answer = 0;

    while(num != 1) {
        if(answer > 500) {
            answer = -1;
            break;
        }
        num%2 == 0 ? num = num/2 : num = num*3+1;
        answer++;
    }

    return answer;
}