class QueueNode {
    value: number;
    next: QueueNode | null;

    constructor(value: number, next: QueueNode | null = null) {
        this.value = value;
        this.next = next;
    }
}

class Queue {
    private head: QueueNode | null;
    private tail: QueueNode | null;

    constructor(head: QueueNode | null, tail: QueueNode | null) {
        this.head = head;
        this.tail = tail;
    }

    enqueue(value: number): number | void {
        const node = new QueueNode(value, null);

        if (this.tail === null) {
            this.head = node;
            this.tail = node;
        } else {
            this.tail.next = node;
            this.tail = node;
        }
        return value;
    }

    dequeue(): number | void {
        if (this.head === null) {
            throw new Error("queue underflow");
        }

        let value = this.head.value;
        this.head = this.head.next;

        if (this.head === null) {
            this.tail = null;
        }
        return value;
    }

    peek(): number | void {
        if (this.head === null) {
            throw new Error("queue is empty");
        }
        return this.head.value;
    }

    peekTail(): number | void {
        if (this.tail === null) {
            throw new Error("queue is empty");
        }
        return this.tail.value;
    }

    outputList(): number[] {
        const list: number[] = [];
        let currentNode = this.head;

        while (currentNode !== null) {
            list.push(currentNode.value);
            currentNode = currentNode.next;
        }
        return list;
    }
}

const consoleQueueState = (q: Queue) => {
    console.log(q.peek());
    console.log(q.peekTail());
    console.log(q.outputList());
};

const result = (): void => {
    const q = new Queue(null, null);

    for (let i of [1, 2, 3, 4, 5]) {
        q.enqueue(i);
    }
    console.log(q.outputList());

    for (let i = 0; i < 3; i++) {
        q.dequeue();
    }
    console.log(q.outputList());

    console.log(q.enqueue(6));
    console.log(q.enqueue(7));
    console.log(q.outputList());
};

result();
