const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;

while (true) {
    let n = data[idx++];
    if (n === 0) break;

    let pares = 0;
    for (let i = 0; i < n; i++) {
        let ci = data[idx++];
        let vi = data[idx++];

        pares += Math.floor(vi / 2);
    }

    console.log(Math.floor(pares /= 2));
}   