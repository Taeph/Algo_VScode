// 다리를 지나는 트럭
// https://programmers.co.kr/learn/courses/30/lessons/42583

console.log( solution(2,10,[7,4,5,6]) );
// console.log( solution(4,10,[7,4,5,6]) );
// console.log( solution(100,100,[10,10,10,10,10,10,10,10,10,10]) );
// console.log( solution(100,100,[10]) );

// 해결!
function solution(bridge_length, weight, truck_weights) {
    var answer = 0;
    var truck_move = new Array(bridge_length);
    truck_move.fill(0);
    // console.log(truck_move);

    for(var i in truck_weights) {
        var truck = truck_weights[i];

        while(1) {
            var sum = 0;
            truck_move = truck_move.slice(1);
            truck_move.map( val => sum += val);

            if(sum + truck <= weight) {
                truck_move.push(truck);
                // console.log(truck_move);
                answer++;
                break;
            } else {
                truck_move.push(0);
                
                if(sum == 0) {
                    answer += 0;
                } else {
                    // console.log(truck_move);
                    answer ++;
                }
            }
        }
    }
    
    answer += bridge_length;

    return answer;
}
