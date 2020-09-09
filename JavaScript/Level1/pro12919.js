// 서울에서 김서방 찾기
// https://programmers.co.kr/learn/courses/30/lessons/12919

var seoul = ['Jane', 'Kim'];

console.log(solution(seoul));

function solution(seoul) {
    var answer = '';

    answer = '김서방은 ' + seoul.lastIndexOf('Kim') + '에 있다';

    return answer;
}