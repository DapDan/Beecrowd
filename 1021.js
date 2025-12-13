const fs = require("fs");

const input = fs.readFileSync(0, "utf8").trim();
let valor = parseFloat(input);

let centavos = Math.floor(valor * 100 + 0.5);

const notas = [10000, 5000, 2000, 1000, 500, 200];
const moedas = [100, 50, 25, 10, 5, 1];

console.log("NOTAS:");
for (let nota of notas) {
    let qtd = Math.floor(centavos / nota);
    centavos %= nota;
    console.log(`${qtd} nota(s) de R$ ${(nota / 100).toFixed(2)}`);
}

console.log("MOEDAS:");
for (let moeda of moedas) {
    let qtd = Math.floor(centavos / moeda);
    centavos %= moeda;
    console.log(`${qtd} moeda(s) de R$ ${(moeda / 100).toFixed(2)}`);
}
