// 프로그래머스 Level1 문제 - 모의고사
// https://www.welcomekakao.com/learn/courses/30/lessons/42840


let answers = [1,3,2,4,2,3,2];
// let answers = [1,2,3,4,5];

console.log(solution(answers));

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

    console.log(answers);

    // 수포자 1
    for(var i=1; i<len+1; i++) {
        if(i%5 == 0) {
            student[0].response.push(5);
        } else {
            student[0].response.push(i%5);
        }
    }
    console.log(student[0].response);

    // 수포자 2
    for(var j=1; j<len+1; j++) {
        if(j%8 == 0) {
            student[1].response.push(5);
        } else if(j%6 == 0) {
            student[1].response.push(4);
        } else if (j%4 == 0) {
            student[1].response.push(3);
        } else if (j%2 == 0) {
            student[1].response.push(1);
        } else {
            student[1].response.push(2);
        }
    }
    console.log(student[1].response);

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
    console.log(student[2].response);

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

    let max = student[0].cnt;
    for(i in student) {
        if(max < student[i].cnt) {
            max = student[i].cnt;
        }
    }

    for(i in student) {
        if(max == student[i].cnt) {
            answer.push(student[i].key);
        }
    }
    
    // console.log(answer);
    return answer;
}