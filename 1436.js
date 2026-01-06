const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let index = 0;
const t = data[index++];

for (let i = 1; i <= t; i++) {
    const n = data[index++];
    const v = [];

    for (let j = 0; j < n; j++) {
        v.push(data[index++]);
    }

    console.log(`Case ${i}: ${v[Math.floor(n / 2)]}`);
}