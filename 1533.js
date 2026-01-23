const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);

let idx = 0;

while (true) {
    const n = input[idx++];
    if (n === 0) break;

    let maior = -1, maior2 = -1;
    let idx1 = 0, idx2 = 0;

    for (let i = 1; i <= n; i++) {
        const num = input[idx++];

        if (num > maior) {
            maior2 = maior;
            idx2 = idx1;

            maior = num;
            idx1 = i;
        } else if (num > maior2) {
            maior2 = num;
            idx2 = i;
        }
    }

    console.log(idx2);
}
