// 핸드폰 번호 가리기
// https://programmers.co.kr/learn/courses/30/lessons/12948

console.log(solution('01033334444'));
console.log(solution('027778888'));

function solution(phone_number) {
    var answer = '';
    answer = phone_number.split('') // 자르고
                        .reverse()  // 돌려서
                        .map( (val, index) => index < 4 ? val : '*') // 앞에 4개 빼고 나머진 '*'
                        .reverse() // 다시 돌려서
                        .join(''); // 합치기
    return answer;
}