const randomTarget = (): number => {
    return Math.floor(Math.random() * 101);
};

const randomArr = (n: number): number[] => {
    const pool = Array.from({ length: 101 }, (_, i) => i);

    for (let i: number = 0; i < n; i++) {
        let j = i + Math.floor(Math.random() * (101 - i));
        [pool[i], pool[j]] = [pool[j], pool[i]];
    }

    return pool.slice(0, n).sort((a, b) => a - b);
};

const binarySearch = (arr: number[], target: number): boolean => {
    let low: number = 0;
    let high: number = arr.length - 1;

    while (low <= high) {
        let mid = Math.floor((low + high) / 2);
        if (target === arr[mid]) {
            return true;
        } else if (target < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return false;
};

const target = randomTarget(); // できれば 5〜100 に揃える
const arr = randomArr(randomTarget());
console.log(
    'target: ' + target,
    '\narr: [' + arr + ']',
    '\n' + binarySearch(arr, target),
);
