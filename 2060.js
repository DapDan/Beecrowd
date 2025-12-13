const fs = require('fs');  
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;
let n = data[idx++];
let divisores = [2, 3, 4, 5];
let cont = [0, 0, 0, 0];

for (let i = 0; i < n; i++) {
    let l = data[idx++];
    
    for (let j = 0; j < divisores.length; j++) {
        if (l % divisores[j] === 0) {
            cont[j]++;
        }
    }
}

for (let j = 0; j < divisores.length; j++) {
    console.log(`${cont[j]} Multiplo(s) de ${divisores[j]}`);
}
