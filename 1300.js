const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

for(let i = 0; i < data.length; i++) {
    const a = data[i];

    if(a % 6 === 0)
        console.log("Y");
    else
        console.log("N");
}