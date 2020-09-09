// 프로그래머스 Level1 문제 - 모의고사
// https://www.welcomekakao.com/learn/courses/30/lessons/42840


let answers = [1,2,3,5,4,1,3,5,5,5,4,1,3,2,4,2,3,2,1,2,3,5,4,1,3,5,5,5,4];
// let answers = [1,2,3,4,5];

console.log(solution(answers));

// 내 풀이
function solution(answers) {
    var answer = [];
    let len = answers.length;

    // 수포자 객체 배열
    var student = [
        {
            key: 1,
            response: [],
            cnt: 0
        },
        {
            key: 2,
            response: [],
            cnt: 0
        },
        {
            key: 3,
            response: [],
            cnt: 0
        }
    ]

    // console.log(answers);

    // 수포자 1
    for(var i=1; i<len+1; i++) {
        if(i%5 == 0) {
            student[0].response.push(5);
        } else {
            student[0].response.push(i%5);
        }
    }
    // console.log(student[0].response);

    // 수포자 2
    for(var j=1; j<len+1; j++) {
        if(j%8 == 0) {
            student[1].response.push(5);
        } else if(j%8%6 == 0) {
            student[1].response.push(4);
        } else if (j%8%4 == 0) {
            student[1].response.push(3);
        } else if (j%8%2 == 0) {
            student[1].response.push(1);
        } else {
            student[1].response.push(2);
        }
    }
    // console.log(student[1].response);

    // 수포자3
    for(var k=1; k<len+1; k++) {
        if(k%10 == 1 || k%10 == 2) {
            student[2].response.push(3);
        } else if(k%10 == 3 || k%10 == 4) {
            student[2].response.push(1);
        } else if(k%10 == 5 || k%10 == 6) {
            student[2].response.push(2);
        } else if(k%10 == 7 || k%10 == 8) {
            student[2].response.push(4);
        } else {
            student[2].response.push(5);
        }
    }
    // console.log(student[2].response);

    // 정답 개수 비교
    for(i in answers) {
        if(answers[i] == student[0].response[i]) {
            student[0].cnt++;
        }
        if(answers[i] == student[1].response[i]) {
            student[1].cnt++;
        }
        if(answers[i] == student[2].response[i]) {
            student[2].cnt++;
        }
    }

    // console.log(student);
    // 최대 정답 개수 찾기
    let max = student[0].cnt;
    for(i in student) {
        if(max < student[i].cnt) {
            max = student[i].cnt;
        }
    }

    // 최대 정답자 찾기
    for(i in student) {
        if(max == student[i].cnt) {
            answer.push(student[i].key);
        }
    }
    
    // console.log(answer);
    return answer;
}



// 다른 사람 풀이 - 엄청 심플하고.. 깔끔하다
function solution2(answers) {
    var answer = [];
    var a1 = [1, 2, 3, 4, 5];
    var a2 = [2, 1, 2, 3, 2, 4, 2, 5]
    var a3 = [ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5];

    var a1c = answers.filter((a,i)=> a === a1[i%a1.length]).length;
    var a2c = answers.filter((a,i)=> a === a2[i%a2.length]).length;
    var a3c = answers.filter((a,i)=> a === a3[i%a3.length]).length;
    var max = Math.max(a1c,a2c,a3c);

    if (a1c === max) {answer.push(1)};
    if (a2c === max) {answer.push(2)};
    if (a3c === max) {answer.push(3)};


    return answer;
}