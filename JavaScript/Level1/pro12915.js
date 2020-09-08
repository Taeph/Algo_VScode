// 문자열 내 마음대로 정렬하기
// https://programmers.co.kr/learn/courses/30/lessons/12915

var strings = ['sun','bed','car'];
var strings = ['abce','abcd','cdx'];
console.log(solution(strings, 1));

function solution(strings, n) {
    var answer = [];
    // 인덱스 값이 같은 경우, 사전순으로 배열 하므로 미리 정렬
    strings.sort();

    var objArr = new Array();
    for( var i in strings) {
        var obj = {str:'', i:''};
        obj.str = strings[i][n];
        obj.i = i;
        objArr.push(obj);   
        objArr.sort( (a, b) => { return a.str == b.str ? 0 : a.str > b.str ? 1 : -1 } );
    }
    console.log(objArr);

    
    for( var i in objArr) {
        answer.push( strings[objArr[i].i] );
    }

    // localeCompare() - 기준 문자열과 비교 했을 떄, 비교 대상 문자열이 정렬상 어느 위치에 배치 되는지 (같으면 0, 앞에오면 양수, 뒤에오면 음수)
    // return strings.sort((s1, s2) => s1[n] === s2[n] ? s1.localeCompare(s2) : s1[n].localeCompare(s2[n]));

    return answer;
}