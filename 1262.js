const fs = require('fs');

const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let idx = 0;

while (idx < input.length) {
    const trace = input[idx++];
    const procs = parseInt(input[idx++], 10);

    let ciclos = 0;
    let i = 0;
    const n = trace.length;

    while (i < n) {
        if (trace[i] === 'W') {
            ciclos++;
            i++;
        } else { 
            let qtdR = 0;
            while (i < n && trace[i] === 'R') {
                qtdR++;
                i++;
            }
            ciclos += Math.ceil(qtdR / procs);
        }
    }

    console.log(ciclos);
}
