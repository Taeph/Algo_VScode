// H-index
// https://www.welcomekakao.com/learn/courses/30/lessons/42747

console.log( solution([3, 0, 6, 1, 5]) );
console.log( solution([1, 1, 1, 1, 1]) );
console.log( solution([1, 1, 2, 2, 3]) );
console.log( solution([3, 0, 1, 4, 5]) );
console.log( solution([6, 6, 6, 6, 6]) );

// 'h번 이상 인용된 논문이, h건 이상' 을 만족하는 h를 찾으면 된다
function solution(citations) {
    var answer = 0;
    var temp = citations.sort( (a,b) => a-b );
    var max = 0;

    for(var i=0; i<=temp.length; i++) {
        var over = temp.filter( val => i <= val).length; // h번 이상 인용
        // console.log('middle', middle,'over',over);
        if(i <= over) {
            max = Math.max(max, i);
            // console.log(max);
        }
    }

    answer = max;

    return answer;
}
