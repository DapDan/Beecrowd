const fs = require('fs');
const data = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);

let idx = 0;
let a = data[idx++];
let b = data[idx++];
let sum = a + b;

console.log(`X = ${sum}`);