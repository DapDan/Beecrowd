import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int n = sc.nextInt();

            Stack<Integer> stack = new Stack<>();
            Queue<Integer> queue = new LinkedList<>();
            ArrayList<Integer> pqueue = new ArrayList<>();

            boolean podeStack = true;
            boolean podeQueue = true;
            boolean podePrio = true;

            for (int i = 0; i < n; i++) {
                int tipo = sc.nextInt();
                int x = sc.nextInt();

                if (tipo == 1) {
                    stack.push(x);
                    queue.add(x);
                    pqueue.add(x);
                } else {
                    // Stack
                    if (stack.isEmpty() || stack.peek() != x)
                        podeStack = false;
                    else
                        stack.pop();

                    // Queue
                    if (queue.isEmpty() || queue.peek() != x)
                        podeQueue = false;
                    else
                        queue.poll();

                    // Priority Queue (maior primeiro)
                    if (pqueue.isEmpty()) {
                        podePrio = false;
                    } else {
                        int maior = Collections.max(pqueue);
                        if (maior != x)
                            podePrio = false;
                        else
                            pqueue.remove((Integer) x);
                    }
                }
            }

            int qtd = 0;
            if (podeStack) qtd++;
            if (podeQueue) qtd++;
            if (podePrio) qtd++;

            if (qtd == 0)
                System.out.println("impossible");
            else if (qtd > 1)
                System.out.println("not sure");
            else if (podeStack)
                System.out.println("stack");
            else if (podeQueue)
                System.out.println("queue");
            else
                System.out.println("priority queue");
        }

        sc.close();
    }
}
