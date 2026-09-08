class QueueNode {
    int value;
    QueueNode next;

    QueueNode(int value, QueueNode next) {
        this.value = value;
        this.next = next;
    }
}

class LinkedListQueue {
    private QueueNode head;
    private QueueNode tail;

    private void printQueue() {
        QueueNode current = head;
        System.out.print("queue: [");

        while (current != null) {
            System.out.print(current.value);
            if (current.next != null) {
                System.out.print(", ");
            }
            current = current.next;
        }
        System.out.println("]");
    }

    public void enqueue(int value) {
        QueueNode node = new QueueNode(value, null);

        if (this.tail == null) {
            this.head = node;
            this.tail = node;
        } else {
            this.tail.next = node;
            this.tail = node;
        }
        System.out.println("enqueue: " + value);
        printQueue();
    }

    public void dequeue() {
        if (this.head == null) {
            throw new Error("queue underflow");
        }

        int removed = this.head.value;
        this.head = this.head.next;

        if (this.head == null) {
            this.tail = null;
        }
        System.out.println("dequeue: " + removed);
        printQueue();
    }

    public static void main(String[] args) {
        LinkedListQueue q = new LinkedListQueue();
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.enqueue(5);
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.enqueue(6);
        q.enqueue(7);
        q.dequeue();
    }
}
