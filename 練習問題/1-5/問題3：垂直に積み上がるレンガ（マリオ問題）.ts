const stackBricks = (height: number): string[] => {
    let result: string[] = [];

    while (height > 0) {
        result.push('#');
        height -= 1;
    }

    return result;
};

process.stdout.write(stackBricks(5).join('\n'));
