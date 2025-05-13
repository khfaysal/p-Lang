let Calculator ={
    add (n1, n2){
        return n1 + n2;
    },
    sub (n1, n2){
        return n1 - n2;
    },
    mul (n1, n2){
        return n1 * n2;
    },
    div (n1, n2){
        return n1 / n2;
    },
    mod (n1, n2){
        return n1 % n2;
    },
}

// console.log(Calculator.add(23, 45));
// console.log(Calculator.sub(23, 45));



function adder (...nums){  //[...nums is the rest operator, it collects all the arguments into an array]
    let sum = 0;
    for( let i =0; i<nums.length; i++){
        sum +=nums[i];
    }
    return sum;
}
// console.log(adder(1,2,3,4,5, 85));

let nums = [1,2,3,4,5, 85];

console.log(adder(...nums)); //[ here we are using the spread operator to spread the array into individual elements]


