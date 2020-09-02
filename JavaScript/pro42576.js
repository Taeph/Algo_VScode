// 완주하지 못한 선수
// https://programmers.co.kr/learn/courses/30/lessons/42576

// 원래는 해시맵을 써서 푸는 문제인거 같은데....

// 궁금증 
// 왜 이렇게 slice 이후 sort를 하면 통과를 하는데,
// let pTemp = participant.sort();
// let cTemp = completion.sort(); 
// 위의 형태로 바로 해서 똑같은 로직을 수행하면, 효율성 1개가 틀릴까?

var participant1 = ['leo', 'kiki', 'eden'];
var participant2 = ['marina', 'josipa', 'nikola', 'vinko', 'filipa'];
var participant3 = ['mislav', 'stanko', 'mislav', 'ana'];
var participant4 = ['mislav', 'stanko', 'mislav', 'ana'];

var completion1 = ['eden', 'kiki'];
var completion2 = ['josipa', 'filipa', 'marina', 'nikola'];
var completion3 = ['stanko', 'ana', 'mislav'];
var completion4 = ['mislav', 'ana', 'mislav'];

// console.log();
console.log(solution(participant1, completion1));
console.log(solution(participant2, completion2));
console.log(solution(participant3, completion3));
console.log(solution(participant4, completion4));

// 성공
// 간단하게 두 배열을 정렬한 다음 비교한다.
// 다른 문자열이 나오는 곳이 참가자배열에는 있지만, 완주자배열에는 없는값 즉, 완주하지 못한 선수이다
function solution_OK(participant, completion) {
    let answer = '';
    let pTemp = participant.slice();
    let cTemp = completion.slice();

    let pArr = pTemp.sort();
    let cArr = cTemp.sort();

    for(i in pTemp) {
        if(pArr[i] != cArr[i]) {
            answer = pArr[i];
            break;
        }
    }
    return answer;
}


// 실패
// 처음에는 두 배열을 반복문을 돌려서 해결하려고 했는데, 정확성은 50점 이었지만 효율성이 0점 이었다.
// 반복문을 이중으로 사용해서 그런거 같아서 한번으로 해결할 방법을 찾아보았다.
function solution_Fail(participant, completion) {
    let answer = '';
    let pTemp = participant.slice();
    let cTemp = completion.slice();

    for(i in cTemp) {
        let target = cTemp[i];
        for(j in pTemp) {
            if(target == pTemp[j]) {
                pTemp[j] = '';
                break;
            }
        }
    }
    
    for(k in pTemp) {
        if(pTemp[k] != '') {
            answer = pTemp[k];
        }
    }
}