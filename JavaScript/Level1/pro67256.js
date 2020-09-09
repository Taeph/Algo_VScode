// 키패드 누르기
// https://programmers.co.kr/learn/courses/30/lessons/67256

console.log( solution([1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5], 'right'));
console.log( solution([7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2], 'left'));

function solution(numbers, hand) {
    var map = new Map();
    // 맵을 사용해서, 키패드의 좌표값을 미리 저장해둔다
    map.set(1, {x:0, y:0});
    map.set(2, {x:0, y:1});
    map.set(3, {x:0, y:2});
    map.set(4, {x:1, y:0});
    map.set(5, {x:1, y:1});
    map.set(6, {x:1, y:2});
    map.set(7, {x:2, y:0});
    map.set(8, {x:2, y:1});
    map.set(9, {x:2, y:2});
    map.set(0, {x:3, y:1});
    map.set('*', {x:3, y:0});
    map.set('#', {x:3, y:2});

    var answer = '';
    // 이전의 손 위치
    var beforeL = '*';
    var beforeR = '#';

    for(var i in numbers) {
        var num = numbers[i];
        console.log(beforeL, beforeR, num);
        if( num==1 || num==4 || num==7 ) {
            beforeL = num;
            answer += 'L';
        } else if( num==3 || num==6 || num==9 ) {
            beforeR = num;
            answer += 'R';
        } else {
            // 마지막 왼손, 오른손의 위치에서 2,5,8,0 중 누르는 숫자까지의 거리를 구한다
            var disL = Math.abs(map.get(beforeL).x - map.get(num).x) + Math.abs(map.get(beforeL).y - map.get(num).y); 
            var disR = Math.abs(map.get(beforeR).x - map.get(num).x) + Math.abs(map.get(beforeR).y - map.get(num).y); 
            
            if(disL == disR) {
                answer += hand.slice(0,1).toUpperCase();
                hand === 'left' ? beforeL = num : beforeR = num;
            } else if(disL > disR) {
                answer += 'R';
                beforeR = num;
            } else {
                answer += 'L';
                beforeL = num;
            }
            console.log(disL, disR, answer);

        }
    }
       
    return answer;
}