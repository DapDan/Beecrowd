function josephus(n, k) {   
    if (n === 1) {
        return 1;
    }

    return (josephus(n - 1, k) + k - 1) % n + 1;
}

const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;
let tam = data[idx++];

for (let i = 1; i <= tam; i++) {
    const n = data[idx++];
    const k = data[idx++];

    const res = josephus(n, k);
    console.log(`Case ${i}: ${res}`);
}