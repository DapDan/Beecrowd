const fs = require("fs");

const input = fs.readFileSync(0, "utf8").trim().split("\n");
let idx = 0;

const [M, N] = input[idx++].split(" ").map(Number);

const dict = {};

for (let i = 0; i < M; i++) {
    const [word, value] = input[idx++].split(" ");
    dict[word] = Number(value);
}

for (let i = 0; i < N; i++) {
    let total = 0;
    while (true) {
        const line = input[idx++].trim();
        if (line === ".") break;

        for (const word of line.split(" ")) {
            total += dict[word] || 0;
        }
    }
    console.log(total);
}
