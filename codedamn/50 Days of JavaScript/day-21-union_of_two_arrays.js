const unionOfArrays = (arr1, arr2) => {

    const s = new Set();

    for(let i = 0; i < arr1.length; i++) {
        s.add(arr1[i]);
    }
    for(let i = 0; i < arr2.length; i++) {
        s.add(arr2[i]);
    }

    let union = Array.from(s);

    return union;
};

console.log(`The union is ${unionOfArrays([1, 2, 34, 45, 3], [3, 24, 21])}`);
