const colorCode = (color) => {
    const resitorsMap = new Map();

    resitorsMap.set('black', 0);
    resitorsMap.set('brown', 1);
    resitorsMap.set('red', 2);
    resitorsMap.set('orange', 3);
    resitorsMap.set('yellow', 4);
    resitorsMap.set('green', 5);
    resitorsMap.set('blue', 6);
    resitorsMap.set('violet', 7);
    resitorsMap.set('grey', 8);
    resitorsMap.set('white', 9);

	return resitorsMap.get(color);
}