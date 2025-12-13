const fs = require("fs");

const input = fs.readFileSync(0, "utf8").trim();
const R = parseFloat(input);

const PI = 3.14159;
const A = PI * R * R;

console.log(`A=${A.toFixed(4)}`);
