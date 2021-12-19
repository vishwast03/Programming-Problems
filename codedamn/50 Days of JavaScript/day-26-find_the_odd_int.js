function findOdd(arr) {
    let odd = 0;
    arr.forEach(element => {
        odd = odd ^ element;
    });
    return odd;
}