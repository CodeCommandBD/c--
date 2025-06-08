
function SumOfDigit(num) {
    let sum = 0;

    let temp = num;

    while (temp > 0) {
        let remainder = temp % 10;

        sum = sum * 10 + remainder;

        temp = Math.floor(temp / 10);

    }

    if (num == sum) {
       
        console.log("palin");
        
        
    } else {
        console.log('not palin');
        
    }

    return sum;
}

let res = SumOfDigit(152)

console.log(res);
