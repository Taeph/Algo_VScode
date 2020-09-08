// 같은 숫자는 싫어
// https://programmers.co.kr/learn/courses/30/lessons/12906


var arr = [1,1,3,3,0,1,1];
var arr = [4,4,4,3,3];

console.log(solution(arr));

function solution(arr) {
    var answer = [arr[0]];

    for( var i=1; i<arr.length; i++) { 
        if( answer[answer.length-1] != arr[i]) {
            answer.push(arr[i]);
        }
    }
    // answer = arr.filter( (val, index) => { return val != arr[index+1] } );
    console.log(answer);
    
    return answer;
}