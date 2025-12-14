const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let index = 0;  
let n = data[index++];

let P = n / Math.log(n);
let M = 1.25506 * (n / Math.log(n));

console.log(P.toFixed(1), M.toFixed(1));