const findMax = (arr: Array<number>) => {
    let maxValue = arr[0];

    for (let value: number = 1; value < arr.length; value++) {
        if (arr[value] > maxValue) maxValue = arr[value];
    }
    return maxValue;
};

const main = () => {
    const list: Array<number> = [6, 9, 111, -65, 4, 687, 0, 12];

    return findMax(list);
};

console.log(main());
