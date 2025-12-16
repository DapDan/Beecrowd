const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let proximo, anterior, count;
let idx = 0;

while (true){
    let n = data[idx++];

    if(n == 0) break;

    let v = [];
    for(let i = 0; i < n; i++){
        v.push(data[idx++]);
    }

    count = 0;
    for(let i = 0; i < n; i++){
        anterior = v[(i - 1 + n) % n];  
        proximo = v[(i + 1) % n];
        if((v[i] > anterior && v[i] > proximo) || (v[i] < anterior && v[i] < proximo)){
            count++;
        }
    }

    console.log(count);
}
