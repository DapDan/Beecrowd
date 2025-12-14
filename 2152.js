const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let index = 0;  
let n = data[index++];

for (let i = 0; i < n; i++) {  
    let h = data[index++];
    let m = data[index++];
    let o = data[index++];  

    if (o === 1) {
        console.log(`${String(h).padStart(2, '0')}:${String(m).padStart(2, '0')} - A porta abriu!`);
    }else{
        console.log(`${String(h).padStart(2, '0')}:${String(m).padStart(2, '0')} - A porta fechou!`); 
    }
}
