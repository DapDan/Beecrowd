const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/);

let idx = 0;

while (idx < input.length) {
    const n = parseInt(input[idx++]);

    let stack = [];
    let queue = [];
    let pqueue = [];

    let podeStack = true;
    let podeQueue = true;
    let podePrio = true;

    for (let i = 0; i < n; i++) {
        const tipo = parseInt(input[idx++]);
        const x = parseInt(input[idx++]);

        if (tipo === 1) {
            stack.push(x);
            queue.push(x);
            pqueue.push(x);
        } else {
            // Stack
            if (stack.length === 0 || stack[stack.length - 1] !== x)
                podeStack = false;
            else
                stack.pop();

            // Queue
            if (queue.length === 0 || queue[0] !== x)
                podeQueue = false;
            else
                queue.shift();

            // Priority Queue
            if (pqueue.length === 0) {
                podePrio = false;
            } else {
                const maior = Math.max(...pqueue);
                if (maior !== x) {
                    podePrio = false;
                } else {
                    const pos = pqueue.indexOf(x);
                    pqueue.splice(pos, 1);
                }
            }
        }
    }

    const qtd =
        (podeStack ? 1 : 0) +
        (podeQueue ? 1 : 0) +
        (podePrio ? 1 : 0);

    if (qtd === 0)
        console.log("impossible");
    else if (qtd > 1)
        console.log("not sure");
    else if (podeStack)
        console.log("stack");
    else if (podeQueue)
        console.log("queue");
    else
        console.log("priority queue");
}
