// 가장 큰 수
// https://www.welcomekakao.com/learn/courses/30/lessons/42746

// console.log( solution([6, 10, 2]) );
console.log( solution([999,99,9,998,997,996,995,994,993,992,991,990,1,2,3,4,5,6,7,8,9]) );

// 0 ~ 9 로 숫자를 분류하고, 분류된 각 숫자 배열 [3, 33, 32, 313, 322] 에서
// 각 숫자의 맨뒤에 분류한 값 (3) 을 붙여서 [3333, 3333, 3233, 3133, 3233] 으로 만들어서 비교
function solution(numbers) {
    const MAXLEN = 4;
    let answer = '';
    let arr = numbers.sort().reverse();

    let map = new Map();
    for(let i in arr) {
        let key = String(arr[i]);
        if( !map.has(key[0]) ) {
            map.set(key[0], [arr[i]]);
        } else {
            let temp = map.get(key[0]);
            temp.push(arr[i])
            map.set(key[0], temp);
        }
    }
    console.log(map);

    map.forEach( (val, key) => {
        if(val.length == 1) {
            answer += val;
        } else {
            let objArr = new Array();
            for(var i in val) {
                let obj = { index:i, value:'' };
                let diff = MAXLEN - String(val[i]).length;
                let newStr = String(val[i]) + key.repeat(diff);
                obj.value = parseInt(newStr);
                objArr.push(obj);
            }
            objArr.sort( (a,b) => b.value - a.value);
            // console.log(objArr);
            for(let j in objArr) {
                // console.log(val[objArr[j].index]);
                answer += String(val[objArr[j].index]);
            }
        }
    });

    if(parseInt(answer) == 0) {
        answer = '0';
    }
    return answer;
}


// 정답... 문자열을 앞뒤로 붙여서 비교 정렬
function solution(numbers) {
    var answer = numbers.map(c=> c + '').
    				sort((a,b) => (b+a) - (a+b)).join('');
    
    return answer[0]==='0'? '0' : answer;
}