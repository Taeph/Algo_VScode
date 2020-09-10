// 기능개발
// https://programmers.co.kr/learn/courses/30/lessons/42586

// 자바스크립트 배열에 관련된 함수들을 잘 알아두면 유용하게 사용할 수 있을 것 같다.
let progresses1 = [93, 30, 55];
let speeds1 = [1, 30, 5];

let progresses2 = [95, 90, 99, 99, 80, 99];
let speeds2 = [1, 1, 1, 1, 1, 1];

let progresses3 = [99, 98, 97, 96, 95, 94];
let speeds3 = [1, 1, 1, 1, 1, 1];

// console.log(solution(progresses1, speeds1));
console.log(solution(progresses2, speeds2));
// console.log(solution(progresses3, speeds3));

function solution(progresses, speeds) {
    var answer = [];
    var days = [];
    for(i in progresses) {
        let work = (100 - progresses[i]);
        let day = (work % speeds[i]) == 0 ? Math.floor(work / speeds[i]) : Math.floor(work / speeds[i]) + 1;
        days.push(day);
    }

    // console.log(days);
    for(i in days) {
        if(i != 0) {
            if(days[i-1] > days[i]) {
                days[i] = days[i-1];
            }
        }
    }
    // console.log(days);

    // 중복값 제거 - 기억 해두기 유용할 듯
    let temp = [];
    temp = days.reduce( function(t, a) {
        console.log(t, t[a]);
        if(t[a]) {
            t[a]++;
        } else {
            t[a] = 1;
        }
        return t;
    }, {});

    // console.log(temp);
    for(i in temp) {
        answer.push(temp[i]);
    }
    // console.log(answer);

    return answer;
}