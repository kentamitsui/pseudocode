def stackBricks(height: int) -> list[str]:
    result: list[str] = []

    while height > 0:
        result.append("#\n")
        height -= 1
    return result


print("".join(stackBricks(5)), end="")
