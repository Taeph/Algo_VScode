// 프린터
// https://programmers.co.kr/learn/courses/30/lessons/42587?language=javascript

console.log(solution([2,1,3,2],2));

function solution(priorities, location) {
    var answer = 0;
    var objArr = new Array();
    // idx, priority 를 가진 배열로 만든다
    priorities.map( (val,idx) => objArr.push( {idx:idx, priority:val}) );

    var temp = new Array();

    while(1) {
        // temp에 뭔가 있을 때, objArr에 temp대입
        temp.length == 0 ? objArr : objArr = temp;

        // objArr에서 우선 순위가 최대인 값을 찾는다
        var max = objArr[0].priority;
        objArr.map( (val) => max < val.priority ? max = val.priority : max );

        // 우선 순위가 최고인 경우는 내보내고, 아닌 경우는 맨 뒤로 보내기
        if(objArr[0].priority == max) {
            answer++;
            var printPage = objArr[0];
            temp = objArr.slice(1);
            // location과 idx가 같으면 출력 문서
            if(printPage.idx == location) {
                break;
            }
        } else {
            var pushPage = objArr[0];
            temp = objArr.slice(1);
            temp.push(pushPage);
        }
    }

    return answer;
}