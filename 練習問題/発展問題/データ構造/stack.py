arr: list[str] = []


def push(string: str, pile: list[str]) -> None:
    pile.append(string)
    print(pile)


def pop(pile: list[str]) -> None:
    if len(pile) == 0:
        print("pileは空になりました")
        return
    print(pile.pop())


push("A", arr)
push("B", arr)
push("C", arr)
pop(arr)
pop(arr)
push("D", arr)
pop(arr)
