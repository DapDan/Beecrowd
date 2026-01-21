const fs = require('fs');
const data = fs.readFileSync(0, 'utf8').trim().split(/\s+/);

let index = 0;
while(1){
    const n = parseInt(data[index++]);
    if(n === 0) break;

    const direcao = ['N', 'L', 'S', 'O'];
    const commands = data[index++];
    let indice = 0;
    for(let i = 0; i < commands.length; i++){
        if(commands[i] === 'D'){
            indice = (indice + 1) % 4;
        } else if(commands[i] === 'E'){
            indice = (indice - 1 + 4) % 4;
        }
    }
    console.log(direcao[indice]);
}