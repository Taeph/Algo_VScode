// 위장
// https://programmers.co.kr/learn/courses/30/lessons/42578


var clothes = [['yellow_hat', 'headgear'], ['blue_sunglasses', 'eyewear'], ['green_turban', 'headgear']];

console.log( solution(clothes) );

// 각 카테고리 별 옷 개수 파악
// A1,A2,B1,C1
// (A1,A2,안입기) * (B1,안입기) * (C1,안입기) - 1(모두 안입기) = 정답
// 3 * 2 * 2 - 1 = 11
function solution(clothes) {
    var answer = 1;
    var myMap = new Map();

    clothes.map( val => {
        if( myMap.has(val[1]) ) {
            myMap.set(val[1], myMap.get(val[1]) + 1);
        } else {
            myMap.set(val[1], 1);
        }
    });

    myMap.forEach( val => {
        answer = answer * (val+1); 
    })

    answer -= 1;

    return answer;
}


