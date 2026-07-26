const isTargetExist: (items: number[], target: number) => boolean = (items, target) => {
    for (let i = 0; i < items.length; i++) {
        if (items[i] === target) {
            return true;
        }
    }
    return false;
};

const targetInt: number = 3;
const checkItems1: number[] = [1, 2, 3, 4, 5];
const checkItems2: number[] = [1, 2, 4, 5];

console.log(isTargetExist(checkItems1, targetInt));
console.log(isTargetExist(checkItems2, targetInt));
