const fs = require('fs');
const { parse } = require('path');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let index = 0;
let n = parseInt(data[index++]);

for (let i = 0; i < n; i++) {
    let s = parseInt(data[index++]);

    let v = new Array(s);   
    for (let j = 0; j < s; j++) {
        v[j] = parseInt(data[index++]);
    }

    let jumps = data[index++];
    let hit = 0;
    for (let j = 0; j < s; j++) {
        if (jumps[j] === 'J' && v[j] > 2)
            hit++;
    else if (jumps[j] === 'S' && v[j] <= 2)
            hit++;
    }

    console.log(hit);
}