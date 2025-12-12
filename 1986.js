const fs = require('fs');

const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let n = Number(data[0]);
let out = "";
let idx = 1;

for (let i = 0; i < n; i++) {
    let hexValue = parseInt(data[idx++], 16); 
    out += String.fromCharCode(hexValue);
}

console.log(out);
