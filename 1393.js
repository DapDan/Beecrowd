const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let index = 0;
let f = new Array(46);
f[0] = f[1] = 1;

for(let i = 2; i < f.length; i++)
    f[i] = f[i - 1] + f[i - 2];

while(index < data.length) {
    let n = data[index++];
    if(n === 0)
        break;
    console.log(f[n]);
}