const number = '+919876543210';

function validateMobile(number) {
    let regexp = /^(\+91[\-\s]?)?[0]?[789]\d{9}$/;
    return regexp.test(number);
}

console.log(`is a valid Indian mobile number: ${validateMobile(number)}`)
