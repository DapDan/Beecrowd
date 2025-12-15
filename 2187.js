const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n");

let teste = 1;

for (let line of input) {
    let V = parseInt(line);
    if (V === 0) break;

    let I = Math.floor(V / 50);
    V %= 50;

    let J = Math.floor(V / 10);
    V %= 10;

    let K = Math.floor(V / 5);
    V %= 5;

    let L = V;

    console.log(`Teste ${teste++}`);
    console.log(`${I} ${J} ${K} ${L}\n`);
}
