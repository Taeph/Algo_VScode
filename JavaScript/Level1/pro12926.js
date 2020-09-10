// 시저 암호
// https://programmers.co.kr/learn/courses/30/lessons/12926

console.log(solution('AB', 1));
console.log(solution('z', 1));
console.log(solution('a B z', 4));

// 제한된 조건이기 때문에, 알파벳 배열을 미리 만들었다
function solution(s, n) {
    var lower = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'];
    var upper = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'];
    var answer = '';
    var arr = s.split('');

    var temp = arr.map( val => {
        var code = val.charCodeAt();
        if(code >= 65 && code <= 90) {
            var idx = (code-65+n) > 25 ? (code-65+n)-25-1 : (code-65+n);
            return upper[idx];
            // val = lower[(code - 65 + n)%25]
        } else if(code >= 97 && code <= 122) {
            var idx = (code-97+n) > 25 ? (code-97+n)-25-1 : (code-97+n);
            return lower[idx];
        } else {
            return val;
        }
    })

    answer = temp.join('');
    return answer;
}
