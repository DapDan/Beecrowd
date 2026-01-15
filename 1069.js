const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let index = 0;
let n = parseInt(data[index++], 10);
for (let i = 0; i < n; i++) {
    let balance = 0;
    let contador = 0;

    entrada = data[index++];
    for (let j = 0; j < entrada.length; j++) {
        if (entrada[j] === '<') {
            balance++;
        } else if (balance > 0 && entrada[j] === '>') {
            balance--;
            contador++;
        }
    }
    console.log(contador);
}