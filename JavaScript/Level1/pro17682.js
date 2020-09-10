// 다트 게임
// https://programmers.co.kr/learn/courses/30/lessons/17682

console.log(solution('1D2S#10S'));

function solution(dartResult) {
    var answer = 0;
    // 숫자 기준으로 자르기
    var temp = dartResult.split(/(?=[0-9])/);

    console.log(''.length);

    for(var i=0; i<temp.length-1; i++) {
        if(temp[i].length == 1) {
            temp[i] = temp[i] + temp[i+1];
            temp[i+1] = '';
        }
        if(temp[i].indexOf('*') && temp[i].indexOf('#') == -1) {
            temp[i] += ' ';
        }
    }
    temp = temp.filter( val => val != '');
    console.log(temp);

    var beforeScore = 0;
    var beforeSign = '';
    for(var i in temp) {
        var num = temp[i][0];
        var str = temp[i][1];
        var sign = temp[i][2];
        var score = 0;

        if(str === 'S') {
            score = Math.pow(num,1);
        } else if(str === 'D') {
            score = Math.pow(num,2);
        } else {
            score = Math.pow(num,3);
        }

        if( sign === '*') {
            score = score*2;
        } else if( sign === '#') {
            score = score*(-1);
        } else {
            score = score;
        }

        answer += score
    }

    return answer;
}