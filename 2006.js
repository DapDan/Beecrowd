const fs = require("fs");
const data = fs.readFileSync(0, "utf8").trim().split("/\s+/").map(Number);    

let idx = 0;
const n = data[idx++];

console.log(n);