const array = [
    { field: "id", operator: "eq" },
    { field: "cStatus", operator: "eq" },
    { field: "money", operator: "eq" },
];

const filterField = "money"

function removeArrayElement(filterField) {
    let result = array.filter(item => {
        if(item.field !== filterField)
            return item;
    });

    return result;
}

console.log(`filtered array: ${removeArrayElement(filterField)}`)
