const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;
let n = data[idx++];

for(let i = 0; i < n; i++) {
    let QT = data[idx++];
    let S = data[idx++];

    let menor = 1000;
    let pos = 0;
    for(let j = 0; j < QT; j++) {
        let quess = data[idx++];
        let diff = Math.abs(S - quess);
        if(diff < menor) {
            menor = diff;
            pos = j + 1;
        }
    }

    console.log(pos);
}
