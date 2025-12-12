const fs = require("fs");
const data = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);

let idx = 0;
const n = data[idx++];

let count = 0;

for (let i = 0; i < data.length - 1; i++) {
    const value = data[idx++];
    if (value === n) {
        count++;
    }
}

console.log(count);
