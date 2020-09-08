// 2016
// https://programmers.co.kr/learn/courses/30/lessons/12901

console.log(solution(1, 31));
console.log(solution(2, 1));
console.log(solution(2, 20));
console.log(solution(3, 1));
console.log(solution(5, 24));

function solution(a, b) {
    var answer = '';
    var daysArr = ['FRI','SAT','SUN','MON','TUE','WED','THU'];
    var dateArr = [31,29,31,30,31,30,31,31,30,31,30,31];

    // 1월 1일에서 시작하니까
    var date = -1;

    if(a == 1) {
        date = b - 1;
    } else {
        for( var i=1; i<a; i++) {
            date += dateArr[i-1];
        }
        date += b;        
    }
    answer = daysArr[date % 7];
    return answer;
}

