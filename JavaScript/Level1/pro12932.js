// 자연수 뒤집어 배열로 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12932

console.log(solution(12345));

function solution(n) {
    var answer = [];
    var temp = (n+'').split('').reverse();
    // 아래 반복문 작업을 map( (cur) => ( parseInt(cur) ) )로 대체 가능
    for(var i in temp) {
        answer.push(parseInt(temp[i]));
    }
    return answer;
}