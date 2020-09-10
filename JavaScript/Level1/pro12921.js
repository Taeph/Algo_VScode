// 소수 찾기
// https://programmers.co.kr/learn/courses/30/lessons/12921

// console.log(solution(2));
console.log(solution(5));
console.log(solution(10));
console.log(solution(50));
console.log(solution(122));
console.log(solution(300));
// console.log(solution(1000000));

// 테스트케이스는 모두 통과하는데, 효율성 실패
function solution(n) {
    var answer = 0;
    var arr = [2,3,5,7];
    
    if(n <= 10) {
        answer = arr.filter( val => val <= n).length;
    } else {
        for(var i=11; i<=n; i++) {
            if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0) {
                arr.push(i);
            }
        }

        var temp;
        temp = arr.map( (val) => {
            var count = 0;
            var sqrt = Math.sqrt(val);

            for(var j=1; j<=sqrt; j++) {
                val%j == 0 ? count += 1 : count += 0;
            }
            count == 1 ? val = val : val = 0;

            return val;
        });
        // console.log(temp);

        answer = temp.filter( val => val != 0).length;
    }

    return answer;
}
