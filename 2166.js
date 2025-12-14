const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();

const N = parseInt(input);

let valor = 0.0;

for (let i = 0; i < N; i++) {
    valor = 1 / (2 + valor);
}

valor += 1;

console.log(valor.toFixed(10));
