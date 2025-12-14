const fs = require("fs");
const N = parseInt(fs.readFileSync(0, "utf8").trim());

if (N === 0) {
    console.log("3.0000000000");
} else {
    let x = 6.0;
    for (let i = 1; i < N; i++) {
        x = 6.0 + 1.0 / x;
    }
    let ans = 3.0 + 1.0 / x;
    console.log(ans.toFixed(10));
}
