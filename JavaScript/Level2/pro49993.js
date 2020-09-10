// 스킬트리
// https://programmers.co.kr/learn/courses/30/lessons/49993

console.log( solution( 'CBD', ['BACDE','CBADF','AECB','BDA'] ) );

// 좀 더 이쁘게 짤 수 있으면 좋겠다..
function solution(skill, skill_trees) {
    var answer = 0;
    var skillArr = skill.split('');
    var trees = skill_trees.slice('');

    var temp = trees.map( (val) => {
        var tempVal = val.split('');
        // 스킬 트리 중에서 스킬에 없는 것은 ''으로 만듬
        for(var i in tempVal) {
            var count = 0;
            for(var j in skillArr) {
                tempVal[i] == skillArr[j] ? count += 1 : count -= 0;
            }
            if(count == 0) {
                tempVal[i] = '';
            }
        }
        val = tempVal.join('');
        return val;
    });

    // 새롭게 만든 스킬트리와 스킬을 비교해서, 스킬트리에 값들이 스킬의 순서와 동일하게 배열되어 있으면 +1
    for(var i in temp) {
        var count = 0;
        for(var j in temp[i]) {
            temp[i][j] == skillArr[j] ? count += 1 : count += 0;
        }
        count == temp[i].length ? answer += 1 : answer += 0;
    }

    return answer;
}