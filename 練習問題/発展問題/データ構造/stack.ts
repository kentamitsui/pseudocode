const stack: string[] = [];

const push = (item: string, pile: string[]): void => {
    pile.push(item);
    console.log('push: ' + item);
};

const pop = (pile: string[]): void => {
    if (pile.length === 0) {
        console.log('pileが空になりました');
        return;
    }
    const item = pile.pop();
    console.log('pop: ' + item);
};

push('A', stack);
push('B', stack);
push('C', stack);
console.log(stack);
pop(stack);
pop(stack);
push('D', stack);
pop(stack);
