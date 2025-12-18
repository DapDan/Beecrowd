const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;

while(idx + 2 < data.length) {
    const d = data[idx++];
    const vf = data[idx++];
    const vg = data[idx++];

    const tempoF = 12.0 / vf;
    const tempoG = Math.sqrt(d * d + 144) / vg;

    if (tempoG <= tempoF)
        console.log("S");
    else
        console.log("N");
}