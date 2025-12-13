const fs = require("fs");

const input = fs.readFileSync(0, "utf8").trim().split("\n");
let i = 0;

while (i < input.length) {
    const N = parseInt(input[i++]);
    let books = [];

    for (let j = 0; j < N; j++) {
        books.push(input[i++]);
    }

    books.sort();

    for (const b of books) {
        console.log(b);
    }
}
