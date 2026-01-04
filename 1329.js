const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/);

let idx = 0;

while (true) {
    const n = Number(input[idx++]);
    if (n === 0) break;

    let mary = 0, john = 0;

    for (let i = 0; i < n; i++) {
        const num = Number(input[idx++]);
        if (num === 0)
            mary++;
        else if (num === 1)
            john++;
    }

    console.log(`Mary won ${mary} times and John won ${john} times`);
}
