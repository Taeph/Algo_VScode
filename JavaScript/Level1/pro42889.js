// 실패율
// https://programmers.co.kr/learn/courses/30/lessons/42889\

console.log(solution(5, [2,1,2,6,2,4,3,3]) );

function solution(N, stages) {
    var answer = [];
    var objArr = [];
    var temp = stages.slice();
    for(var i=1; i<=N; i++) {
        temp = temp.filter( val => val >= i );
        var all = temp.length;
        var fail = temp.filter( val => val <= i ).length;
        var obj = { idx:i, failure:fail/all };
        objArr.push(obj);
    }
    objArr.sort( (a,b) => b.failure - a.failure);
    for(i in objArr) {
        answer.push(objArr[i].idx);
    }
    return answer;
}