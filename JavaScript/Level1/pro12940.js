// 최대공약수와 최소공배수
// https://programmers.co.kr/learn/courses/30/lessons/12940

console.log(solution(3,12));
console.log(solution(2,5));

function solution(n, m) {
    // 최소공배수 = n의 최대공약수 * m의 최대공약수 / mn의 최대공약수
    var answer = [];
    var nArr = new Array();
    var mArr = new Array();

    for(var i=1; i<=n; i++) {
        n%i==0 ? nArr.push(i) : 0;
    }

    for(var i=1; i<=m; i++) {
        m%i==0 ? mArr.push(i) : 0;
    }

    var nGCM = nArr.sort( (a,b) => b-a ).slice(0,1);
    var mGCM = mArr.sort( (a,b) => b-a ).slice(0,1);

    // 두 배열을 합쳐서 값이 2개씩 있는 것은 공약수, 정렬해서 최대공약수 찾기
    var temp = nArr.concat(mArr);
    var arr = temp.sort( (a,b) => a-b ).filter( (val,index) => val == temp[index+1]);

    // console.log(arr);
    var nmGCM = arr.pop();
    // console.log(nArr, mArr, nMax, mMax, nmMax);

    answer.push(nmGCM);
    answer.push(nGCM * mGCM / nmGCM);

    return answer;
}