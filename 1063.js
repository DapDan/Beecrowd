const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/);

let idx = 0;

while (true) {
    const n = parseInt(input[idx++]);
    if (n === 0) break;

    const entrada = [];
    const saida = [];
    const pilha = [];
    let output = [];

    for (let i = 0; i < n; i++)
        entrada.push(input[idx++]);

    for (let i = 0; i < n; i++)
        saida.push(input[idx++]);

    let i = 0, j = 0, flag = 0;

    while (i <= n - 1) {
        pilha.push(entrada[i]);
        output.push('I');
        i++;

        while (pilha.length && j < n && pilha[pilha.length - 1] === saida[j]) {
            pilha.pop();
            output.push('R');
            j++;
            flag++;
        }
    }

    if (flag === n)
        console.log(output.join(''));
    else
        console.log(output.join('') + " Impossible");
}
