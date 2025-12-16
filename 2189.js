const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);

let idx = 0;
let teste = 0;

while (true) {
    const n = input[idx++];
    if (n === 0) break;

    teste++;
    let winner = 0;

    for (let i = 1; i <= n; i++) {
        const num = input[idx++];
        if (num === i)
            winner = num;
    }

    console.log(`Teste ${teste}`);
    console.log(winner);
    console.log("");
}
