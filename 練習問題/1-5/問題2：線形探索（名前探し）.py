def target_search(items: list[int], targetItem: int) -> bool:
    for value in items:
        if value == targetItem:
            return True
    return False


target: int = 3
checklist_1: list[int] = [1, 2, 3, 4, 5]  # 想定されるreturn: true
checklist_2: list[int] = [1, 2, 4, 5]  # 想定されるreturn: false


print(target_search(checklist_1, target))
print(target_search(checklist_2, target))
