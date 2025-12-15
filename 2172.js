const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;

while(true) {
    let n = data[idx++];
    let m = data[idx++];

    if (n === 0 && m === 0) break;

    console.log(n * m);
}