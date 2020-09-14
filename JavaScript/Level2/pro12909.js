// 올바른 괄호
// https://www.welcomekakao.com/learn/courses/30/lessons/12909

console.log( solution('()()') );

// 학부시절 자료구조 수업 때, 스택 공부하면서 구현해본 문제
function solution(s){
    var answer = true;
    var temp = s.split('');
    var stack = new Array();
    
    for(var i in temp) {
        if(temp[0] == ')') {
            return false;
        } else {
            if(temp[i] == '(') {
                stack.push(temp[i]);
            } else {
                if(stack.length == 0) {
                    return false;
                } else {
                    stack.pop();
                }
            }
        }
    }
    
    stack.length === 0 ? answer = true : answer = false;

    return answer;
}