const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let idx = 0;
let n = data[idx++];
let m = data[idx++];

let total = n;

for (let i = 0; i < m; i++) {
    let action = data[idx++];

    if (action === 'fechou') {
        total++;
    }else if (action === 'clicou') {
        total--;
    }
}

console.log(total);