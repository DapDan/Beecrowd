const fs = require("fs");
const data = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);

let idx = 0;

while(idx < data.length) {
    const v = data[idx++]; 
    const d = data[idx++]; 

    const r = d / 2;
    const area = 3.14 * r * r;
    const h = v / area;

    console.log(`ALTURA = ${h.toFixed(2)}`);
    console.log(`AREA = ${area.toFixed(2)}`);
}