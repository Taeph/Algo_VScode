// 행렬의 덧셈
// https://programmers.co.kr/learn/courses/30/lessons/12950

console.log( solution( [[1,2],[2,3]], [[3,4],[5,6]] ) );
console.log( solution( [[1],[2]], [[3],[4]] ) );

function solution(arr1, arr2) {
    var answer = [];
    // 두 배열의 길이가 같으므로, map으로 arr1[i][j] + arr2[i][j]를 해준다
    for( var i in arr1) {
        answer.push(arr1[i].map( (val,idx) => val + arr2[i][idx]));
    }

    return answer;
}