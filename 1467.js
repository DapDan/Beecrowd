const fs = require("fs");

const input = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);

for (let i = 0; i < input.length; i += 3) {
    const A = input[i];
    const B = input[i + 1];
    const C = input[i + 2];

    if (A === B && A === C)
        console.log("*");
    else if (A === B && A !== C)
        console.log("C");
    else if (A === C && A !== B)
        console.log("B");
    else if (B === C && B !== A)
        console.log("A");
}
