while True:
    try:
        n = int(input())

        stack = []
        queue = []
        pqueue = []

        podeStack = True
        podeQueue = True
        podePrio = True

        for i in range(n):
            tipo, x = map(int, input().split())

            if tipo == 1:
                stack.append(x)
                queue.append(x)
                pqueue.append(x)

            else:
                # Stack
                if not stack or stack[-1] != x:
                    podeStack = False
                else:
                    stack.pop()

                # Queue
                if not queue or queue[0] != x:
                    podeQueue = False
                else:
                    queue.pop(0)

                # Priority Queue
                if not pqueue or max(pqueue) != x:
                    podePrio = False
                else:
                    pqueue.remove(x)

        qtd = podeStack + podeQueue + podePrio

        if qtd == 0:
            print("impossible")
        elif qtd > 1:
            print("not sure")
        elif podeStack:
            print("stack")
        elif podeQueue:
            print("queue")
        else:
            print("priority queue")

    except EOFError:
        break
