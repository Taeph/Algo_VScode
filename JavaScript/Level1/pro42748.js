// K번째 수
// https://programmers.co.kr/learn/courses/30/lessons/42748

var array = [1,5,2,6,3,7,4]
var commands = [[2, 5, 3], [4, 4, 1], [1, 7, 3]];

console.log(solution(array, commands));

function solution(array, commands) {

    var answer = [];
    for( var i in commands) {
        var temp = array.slice(commands[i][0]-1, commands[i][1]);
        // console.log(temp);
        temp.sort( (a,b) => { return a - b });
        /*
            compareFunction이 제공되지 않으면 요소를 문자열로 변환하고 '유니 코드' 코드 포인트 순서로 문자열을 비교하여 정렬됩니다.
            예를 들어 "바나나"는 "체리"앞에옵니다.
            숫자 정렬에서는 9가 80보다 앞에 오지만 숫자는 문자열로 변환되기 때문에 "80"은 유니 코드 순서에서 "9"앞에옵니다.

            즉, compareFunction을 제공하지 않고 temp.sort() 이런 형태로 사용하면, 
            숫자는 문자열로 변환되어 정렬하기 때문에 '80'은 유니코드 순서에서 '9'보다 앞에 오기 때문에 문제가 발생한다
        */
        answer.push(temp[commands[i][2] - 1]);
    }
    return answer;
}