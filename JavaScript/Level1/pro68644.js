// 두 개 뽑아서 더하기
// https://programmers.co.kr/learn/courses/30/lessons/68644

console.log( solution([2,1,3,4,1]) );

// 그냥 간단하게.. 반복으로..
function solution(numbers) {
    var answer = [];

    for(var i in numbers) {
        for(var j in numbers) {
            if( i != j) {
                var sum = numbers[i] + numbers[j];

                if( !answer.includes(sum) ) {
                    answer.push(sum);
                }
            }
        }
    }

    answer.sort( (a,b) => a - b);

    return answer;
}