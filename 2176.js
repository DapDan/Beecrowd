const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let index = 0;
let s = data[index++];
let count = (s.match(new RegExp("1", 'gi')) ||  []).length;

if (count % 2 === 0) {
    s += '0';
} else {
    s += '1';
}

console.log(s);