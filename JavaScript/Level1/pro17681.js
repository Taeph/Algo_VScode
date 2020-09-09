// 비밀지도
// https://programmers.co.kr/learn/courses/30/lessons/17681

var a = [9,20,28,18,11];
var b = [30,1,21,17,28];
var c = [46, 33, 33 ,22, 31, 50];
var d = [27 ,56, 19, 14, 14, 10];

console.log(solution(5,a,b));

console.log(solution(6,c,d));

// 10진수 to 2진수 
// var dec = 10;
// dec.toString(2) == '1010'
function solution(n, arr1, arr2) {
    var answer = [];

    for(var i in arr1) {
        var temp1 = arr1[i].toString(2);
        var temp2 = arr2[i].toString(2);
        
        temp1.length < n ? temp1 = ('0'.repeat(n-temp1.length)) + temp1 : temp1;
        temp2.length < n ? temp2 = ('0'.repeat(n-temp2.length)) + temp2 : temp2;

        console.log(temp1, temp2);

        var result = parseInt(temp1) + parseInt(temp2);
        // 01101 + 01001 = 2102 가 되므로 빈칸만큼 0을 채워주어야 한다.
        var str = '0'.repeat(n-String(result).length) + String(result);
        
        var row = str.split('').map( val => val == 0 ? ' ' : '#').join('');

        answer.push(row);
    }

    return answer;
}
