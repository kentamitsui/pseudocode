import random


def binary_search(arr: list[int], target: int) -> bool:
    low: int = 0
    high: int = len(arr) - 1

    while low <= high:
        mid: int = (low + high) // 2
        if (target == arr[mid]):
            return True
        elif (target < arr[mid]):
            high = mid - 1
        else:
            low = mid + 1
    return False


def random_target() -> int:
    return random.randint(0, 100)


def random_arr(n: int) -> list[int]:
    return sorted(random.sample(range(5, 101), n))


def main() -> None:
    arr = random_arr(random_target())
    target = random_target()
    found = binary_search(arr, target)

    print(f"target: {target}")
    print(f"searchArr: {arr}")
    print(found)


main()
