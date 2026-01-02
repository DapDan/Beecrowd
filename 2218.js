const fs = require("fs");

const input = fs.readFileSync(0, "utf8").trim().split(/\s+/);
let idx = 0;

const t = parseInt(input[idx++]);

let output = [];
for (let i = 0; i < t; i++) {
    const n = parseInt(input[idx++]);
    const res = (n * (n + 1)) / 2 + 1;
    output.push(res);
}

console.log(output.join("\n"));
