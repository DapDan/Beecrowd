const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let index = 0;
let n = data[index++];
n = n + 1;
let m = []; 

for (let i = 0; i < n; i++) {
    let row = [];

    for (let j = 0; j < n; j++) {
        row.push(data[index++])
    }

    m.push(row);
}

let result = [];

for (let i = 0; i < n - 1; i++) {
    let line = "";
    for (let j = 0; j < n - 1; j++) {
        let count = 0;

        if (m[i][j] === 1) count++;
        if (m[i][j + 1] === 1) count++;
        if (m[i + 1][j] === 1) count++;
        if (m[i + 1][j + 1] === 1) count++;

        line += (count >= 2 ? "S" : "U");
    }
    result.push(line);
}

console.log(result.join('\n'));