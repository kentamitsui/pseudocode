def find_max(arr: list[int]) -> int:
    maxValue: int = arr[0]

    for value in arr[1:]:
        if value > maxValue:
            maxValue = value
    return maxValue


def main() -> None:
    searchArray: list[int] = [20, 3, 6, 8, -10, 6]

    print(find_max(searchArray))


main()
