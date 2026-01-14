const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split('\n');

let idx = 0;

while (true) {
    let n = parseInt(input[idx++]);
    if (n === 0) break;

    while (true) {
        let parts = input[idx++].trim().split(' ').map(Number);

        if (parts[0] === 0)
            break;

        let entrada = parts;
        let saida = [];
        let pilha = [];

        for (let i = 1; i <= n; i++)
            saida.push(i);

        let i = n - 1, j = n - 1, flag = 0;

        while (true) {
            if (i >= 0 && j >= 0 && entrada[i] === saida[j]) {
                i--; j--; flag++;
            }
            else if (pilha.length && j >= 0 && pilha[pilha.length - 1] === saida[j]) {
                pilha.pop();
                j--; flag++;
            }
            else if (i >= 0 && j >= 0) {
                pilha.push(entrada[i]);
                i--;
            }
            else break;
        }

        console.log(flag === n ? "Yes" : "No");
    }
    console.log("");
}
