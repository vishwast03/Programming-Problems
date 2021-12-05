let uniqueInOrder = (iterable) => {
    let list = [iterable[0]];
    let idx = 0;
    for (let i = 1; i < iterable.length; i++) {
        if (iterable[i] != list[idx]) {
            list.push(iterable[i]);
            idx++;
        }
    }
    return list;
};