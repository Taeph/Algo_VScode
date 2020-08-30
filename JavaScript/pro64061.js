// 프로그래머스 Level1 문제 - 크레인 인형뽑기 게임(2019 카카오 겨울 인턴십)
// https://www.welcomekakao.com/learn/courses/30/lessons/64061

let board = [
    [0,0,0,0,0],
    [0,0,1,0,3],
    [0,2,5,0,1],
    [4,2,4,4,2],
    [3,5,1,3,1]
];

let moves = [1,5,3,5,1,2,1,4];



console.log(solution(board, moves));


// 풀이
function solution(board, moves) {
    var answer = 0;
    let tempBoard = board.slice();
    let boardColLen = new Array();
    let cart = new Array();  

    // 각 크레인 칸들의 인형 수 - 각 칸마다 0의 개수를 count해서 각 칸에 들어있는 인형 수 를 찾는다
    for(var i in tempBoard) {
        let count = 0;
        for(var j in tempBoard) {
            if(tempBoard[j][i] == 0 ){
                count++;
            }
        }
        boardColLen.push(tempBoard.length - count);
    }
    // console.log(boardLen);

    // 물건 뽑는 중
    for(var idx in moves) {
        let xPos = moves[idx] - 1;
        let yPos = tempBoard.length - boardColLen[xPos];
        let target;

        console.log(idx, xPos, yPos);
        // 현재 크레인 위치에 물건이 없는 경우 - boardColLen[xPos] = 0 즉, 인형의 개수가 0개 인 경우
        if(yPos == tempBoard.length) {
            continue;
        } else {
            target = tempBoard[yPos][xPos];
            // console.log(target);
            boardColLen[xPos] -= 1;

            cart.push(target);

            // 카트에 가장 처음 넣는 경우
            if(idx == 0 ) {
                continue;
            } else {
                let before = cart[cart.length - 2];
                let current = cart[cart.length - 1];
                if(before == current) {
                    answer += 2;
                    cart.pop();
                    cart.pop();
                }
            }
            console.log(idx, cart);
        }
    }
    return answer;
}