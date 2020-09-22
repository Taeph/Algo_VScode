// 타켓 넘버
// https://programmers.co.kr/learn/courses/30/lessons/43165

console.log( solution( [1,1,1,1,1], 3 ) );

// 전체 합에서 조합을구해서 빼준다
function solution(numbers, target) {
    var answer = 0;
    var final = [];
    const source = numbers;

    // 조합 함수 못짜면 외우기
    const combination = (source, target, n, r, count) => {
        if(r === 0) final.push(target); 
        else if(n === 0 || n < r) return;
        else { 
            target.push(source[count]); 
            combination(source, Object.assign([], target), n - 1, r - 1, count + 1); 
            target.pop();
            combination(source, Object.assign([], target), n - 1, r, count + 1); 
        }
    };


    for(var i=1; i<=source.length; i++) {
        combination(source, [], source.length, i, 0);
    }
    

    let sum = [];
    for(var i in final) {
        sum.push(final[i].reduce( (pre,cur) => pre += cur ));
    }
    const base = numbers.reduce( (pre,cur) => pre += cur);
    
    var temp = sum.filter( val => {
        if(base - 2*val == target) return val;
    });
    
    answer = temp.length;

    return answer;
}
