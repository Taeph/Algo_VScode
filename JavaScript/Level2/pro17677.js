// 뉴스 클러스터링
// https://programmers.co.kr/learn/courses/30/lessons/17677

console.log( solution('FRANCE', 'french') );
console.log( solution('handshake', 'shake hands') );
console.log( solution('aa1+aa2', 'AAAA12') );
console.log( solution('E=M*C^2', 'e=m*c^2') );

function solution(str1, str2) {
    let answer = 0;

    let arr1 = new Array();
    let arr2 = new Array();

    let unionCnt = 0;
    let intersectionCnt = 0;

    for(let i=0; i<str1.length; i++) {
        if(str1[i+1] == undefined) {
            break;
        } else {
            let temp1 = str1[i].toUpperCase().charCodeAt();
            let temp2 = str1[i+1].toUpperCase().charCodeAt();
            
            if( (temp1 >= 65 && temp1 <= 90) && (temp2 >= 65 && temp2 <= 90) ) {
                // console.log(str1[i] + str1[i+1]);
                arr1.push(str1[i] + str1[i+1]);
            } else {
                continue;
            }
        }
    }

    for(let i=0; i<str2.length; i++) {
        if(str2[i+1] == undefined) {
            break;
        } else {
            let temp1 = str2[i].toUpperCase().charCodeAt();
            let temp2 = str2[i+1].toUpperCase().charCodeAt();
            
            if( (temp1 >= 65 && temp1 <= 90) && (temp2 >= 65 && temp2 <= 90) ) {
                // console.log(str2[i] + str2[i+1]);
                arr2.push(str2[i] + str2[i+1]);
            } else {
                continue;
            }
        }
    }

    // console.log(arr1);
    // console.log(arr2);

    arr1.map( (val) => {
        for(let i in arr2) {
            if( val.toUpperCase() === arr2[i].toUpperCase() ) {
                intersectionCnt++;
                arr2[i] = '';
                break;
            }
        }
    });

    unionCnt = arr1.length + arr2.length - intersectionCnt;

    // console.log(unionCnt, intersectionCnt);

    answer = unionCnt == 0 && intersectionCnt == 0 ? 65536 : Math.floor(intersectionCnt/unionCnt * 65536);

    return answer;
}