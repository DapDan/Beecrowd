const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;
let i = 0;

while (i < data.length) {
    const r1 = data[i++];
    const x1 = data[i++];
    const y1 = data[i++];
    const r2 = data[i++];
    const x2 = data[i++];
    const y2 = data[i++];

    const dx = (x2 - x1);
    const dy = (y2 - y1);

    const dist = (dx * dx) + (dy * dy);
    const diffRaio = r1 - r2;

    if(diffRaio >= 0 && dist <= diffRaio * diffRaio)
        console.log("RICO");
    else
        console.log("MORTO");
}
