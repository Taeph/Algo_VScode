// 직사각형 별찍기
// https://programmers.co.kr/learn/courses/30/lessons/12969

// 태어나서 처음 본 녀석들 ...
// process.stdin.on() - console 입력
// process.stdout.write(param) - param을 개행 없이 출력
process.stdin.setEncoding('utf8');
process.stdin.on('data', data => {
    const n = data.split(" ");
    const a = Number(n[0]), b = Number(n[1]);
    // console.log(a);
    // console.log(b);    
    var row = '*'.repeat(a);
    
    for(var i=0; i<b; i++) {
        console.log(row);
    }
});