const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;

while (true) {
    const n = data[idx++];
    if(n === -1) 
        break;

    let sum = 0;
    let count = 0;

    for (let i = 0; i < n; i++) {
        const num = data[idx++];
        sum += num;

        if(sum % 100 === 0) {
            sum = 0;
            count++;
        }
    }

    console.log(count);
}