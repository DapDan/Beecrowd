const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/);

let idx = 0;
const n = Number(input[idx++]);

let output = [];

for (let i = 0; i < n; i++) {
    const principal = input[idx++];
    const secundario = input[idx++];

    if (principal.endsWith(secundario))
        output.push("encaixa");
    else
        output.push("nao encaixa");
}

console.log(output.join("\n"));
