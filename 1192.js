const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let idx = 0;
let n = Number(input[idx++]);

for (let i = 0; i < n; i++) {
    let line = input[idx++];
    let a = Number(line[0]);
    let b = Number(line[2]);
    let res;

    if (a === b) {
        res = a * b;
    } else {
        if (line[1] === line[1].toUpperCase()) {
            res = b - a;
        } else {
            res = a + b;
        }
    }

    console.log(res);
}