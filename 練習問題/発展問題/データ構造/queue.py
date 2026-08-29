# 連結リストで実装した FIFO キュー。
# 上から順に読むと、データ構造 → 基本操作 → 参照用メソッド → 演習シナリオ、の流れになる。


class Node:
    """キューを構成する1要素。値と、次の要素への参照を持つ。"""

    def __init__(self, value, next=None):
        self.value = value
        self.next = next


class Queue:
    """先入れ先出し（FIFO）の待ち行列。"""

    def __init__(self):
        self.head = None  # 次に出る要素（先頭）
        self.tail = None  # 最後に並んだ要素（末尾）

    # --- 基本操作（待ち列を変更する）---

    def enqueue(self, value):
        """末尾に並ばせる。"""
        node = Node(value)
        if self.tail is None:
            self.head = self.tail = node
        else:
            self.tail.next = node
            self.tail = node

    def dequeue(self):
        """先頭の要素を取り出して返す。空のときは IndexError。"""
        if self.head is None:
            raise IndexError("queue underflow")

        value = self.head.value
        self.head = self.head.next
        if self.head is None:
            self.tail = None
        return value

    # --- 参照用（待ち列は変更しない）---

    def peek(self):
        """先頭の値を返す。空のときは IndexError。"""
        if self.head is None:
            raise IndexError("queue is empty")
        return self.head.value

    def peek_tail(self):
        """末尾の値を返す。空のときは IndexError。"""
        if self.tail is None:
            raise IndexError("queue is empty")
        return self.tail.value

    def to_list(self):
        """先頭から末尾までの値をリストで返す。"""
        result = []
        current = self.head
        while current is not None:
            result.append(current.value)
            current = current.next
        return result


def print_queue_state(q: Queue) -> None:
    """先頭・末尾・全体を、この順で表示する。"""
    print(q.peek())
    print(q.peek_tail())
    print(q.to_list())


def main() -> None:
    """擬似コードと同じ演習シナリオを実行する。"""

    q = Queue()

    # 1. 1〜5番が並ぶ → [1, 2, 3, 4, 5]
    for n in [1, 2, 3, 4, 5]:
        q.enqueue(n)
    print_queue_state(q)

    # 2. 3人が入場（先頭から dequeue）→ [4, 5]
    for _ in range(3):
        q.dequeue()
    print_queue_state(q)

    # 3. 6番・7番が並ぶ → [4, 5, 6, 7]
    q.enqueue(6)
    q.enqueue(7)
    print_queue_state(q)


if __name__ == "__main__":
    main()
