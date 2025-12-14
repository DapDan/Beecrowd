const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let idx = 0;
const C = Number(input[idx++]);

let output = [];

for (let t = 0; t < C; t++) {
    const B = Number(input[idx++]);
    const E = Number(input[idx++]);

    let seq = '';
    for (let i = B; i <= E; i++) {
        seq += i.toString();
    }

    let esp = seq.split('').reverse().join('');
    output.push(seq + esp);
}

console.log(output.join('\n'));
