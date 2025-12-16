const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/);

let i = 0;
while (i < input.length) {
    const a = BigInt(input[i++]);
    const b = BigInt(input[i++]);

    const res = a ^ b;
    console.log(res.toString());
}
