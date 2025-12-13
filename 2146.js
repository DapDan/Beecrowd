const fs = require('fs');
const data =  fs.readFileSync(0, 'utf8').trim().split(/\s+/);

for (const n of data){
    const x = Number(n);
    console.log(n - 1);
}