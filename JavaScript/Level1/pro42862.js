// 체육복
// https://programmers.co.kr/learn/courses/30/lessons/42862

var lost1 = [4];
var lost2 = [2,3,4];
var lost3 = [4,5];

var reserve1 = [1,2,5];
var reserve2 = [3];
var reserve3 = [1,2,3,4,5];


function solution(n, lost, reserve) {
    var answer = 0;
    var lost_temp = lost.slice().sort();
    var reserve_temp = reserve.slice().sort();
    answer = n - lost_temp.length;

    // 자기 옷이 있는 애는 자기옷을 입는다(누굴 빌려주지 않는다 - 전제조건)
    var self_reserve = new Array();
    for( var i in lost_temp) {
        for( var j in reserve_temp) {
            if( lost_temp[i] == reserve_temp[j] ) {
                self_reserve.push(lost_temp[i]);
                answer++;
            }
        }
    }
    console.log(self_reserve);
    // 자기 옷이 있는 사람은 먼저 제외한다
    for(i in self_reserve) {
        reserve_temp = reserve_temp.filter( (item) => { return item != self_reserve[i] });
        lost_temp = lost_temp.filter( (item) => { return item != self_reserve[i] });
    }    

    console.log(reserve_temp, lost_temp);

    // 잃어버린 사람과 여분의 사람이 차이가 -1, 1 이면 빌려줄 수 있다
    for( var i in lost_temp ) {
        for( var j in reserve_temp ) {
            // console.log(reserve_temp);
            var temp = Math.abs( lost_temp[i] - reserve_temp[j] );
            // console.log(answer, lost_temp[i], reserve_temp[j], temp);
            // 차이의 절대값이 1보다 작거나 같으면, 빌려줄 수 있다
            if( temp == 1 ) {
                reserve_temp = reserve_temp.filter( (item) => { return item != reserve_temp[j] });
                answer++;
                break;
            }
        }
    }
    // console.log('end', reserve_temp);

    return answer;
}


console.log(solution(5, [2,3,4], [3,4,5])); 
// 결과는 4
// 3, 4는 각자 자기 옷을 입고나면, 잃어버린 사람은 2, 여분이 있는 사람은 5 옷을 빌려 줄 수 없으므로
// 1,3,4,5 만 수업을 듣는다

// 자기 자신의 여분을 가진 사람을 먼저 제거해줘야 결과가 4이고,
// 자기 자신의 여분을 가진 사람을 먼저 제거해주지 않고 한꺼번에 연산하면 결과는 5이다