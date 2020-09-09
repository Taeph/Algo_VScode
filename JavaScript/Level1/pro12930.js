// 이상한 문자 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12930


console.log(solution('try hello world'));

function solution(s) {
    var answer = '';
    var word = s.split(' ');
    for(var i in word) {
        for(var j in word[i]) {
            j%2 == 0 ? answer += word[i][j].toUpperCase() : answer += word[i][j].toLowerCase();
        }
        i < word.length-1 ? answer += ' ' : answer += '';
    }
    return answer;
}