const fs = require('fs');

const input = fs.readFileSync(0, 'utf8').trim().split('\n');

const n = parseInt(input[0]);
let idx = 1;

for (let i = 0; i < n; i++) {
    const word = input[idx++].trim();

    if (word.length === 5) {
        console.log(3);
    } else {
        if (
            (word[0] === 'o' && word[1] === 'n') ||
            (word[0] === 'o' && word[2] === 'e') ||
            (word[1] === 'n' && word[2] === 'e')
        ) {
            console.log(1);
        } else {
            console.log(2);
        }
    }
}
