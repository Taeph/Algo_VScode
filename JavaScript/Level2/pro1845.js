// 폰켓몬
// https://programmers.co.kr/learn/courses/30/lessons/1845

console.log( solution([3,1,2,3]) );

function solution(nums) {
    var answer = 0;
    let arr = nums.slice();
    
    let newArr = arr.sort().filter( (val,idx) => { return val != arr[idx+1]} ); // 폰켓몬 종류 중복제거 후 남은 종류의 수

    let select = nums.length/2; // 고르는 수
    let kinds = newArr.length;  // 폰켓몬 종류 수

    if(kinds >= select) {
        answer = select;
    } else {
        answer = kinds;
    }

    return answer;
}