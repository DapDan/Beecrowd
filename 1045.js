const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);

let idx = 0;
let a = data[idx++];
let b = data[idx++];
let c = data[idx++];

let v = [a, b, c];
v.sort((x, y) => y - x);
[a, b, c] = v;  

if (a >= b + c) {
    console.log("NAO FORMA TRIANGULO");
} else {
    if (a * a === b * b + c * c)
        console.log("TRIANGULO RETANGULO");
    else if (a * a > b * b + c * c)
        console.log("TRIANGULO OBTUSANGULO");
    else
        console.log("TRIANGULO ACUTANGULO");

    if (a === b && b === c)
        console.log("TRIANGULO EQUILATERO");
    else if (a === b || a === c || b === c)
        console.log("TRIANGULO ISOSCELES");
}