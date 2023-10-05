// maths object

// used to solve the math related problems 

// 1. round , ceil , floor , trunc , sqrt, pow , min , max

// similarly there are different functions of math object used in java refer MDN for further study 

// ?  display value of pie : 

console.log("value of pi : "+Math.PI);

// ? eulers number 

console.log("eulers number value : "+Math.E);

// ! ________________________________________________

// ? Round Off 

// if number decimal is greater than or equal to 5 it rounds off to nearest big integer 

let x =Math.round(4.7); // 5

console.log("round off 4.7 : "+x);

//as deciaml point lower than 5 goes to the nearest integer on the lower side 

let y =Math.round(4.2); // 4

console.log("round off 4.2 : "+y);

// ? Ceil

// gives the higher number if there is any decimal place after the integer for the number 

let z =Math.ceil(4.2); // 5

console.log("ceil of 4.2 : "+z);

//? Floor

// gives the lower number if there is any decimal place after the integer for the number 

let t =Math.floor(4.2); // 4

console.log("floor of 4.2 : "+t);

// ? trunc 

// removes the decimal value from the integer 

let u =Math.trunc(4.2); // 4

console.log("trunc of 4.2 : "+u);

//? pow 

// used to calculate the power values of numbers 

let q =Math.pow(2,3); // 8

console.log("2^3 : "+q);

// ? sqrt 

// used to calculate the square root 

let c =Math.sqrt(25); // 4

console.log("sqrt 25 : "+c);

//? min 

// gives min value out of the given values inside the () 

let b =Math.min(2,6,7,8,-1,-5,-10); // 4

console.log("min value :  "+b);

// ? max 

// gives max value out of the given values inside the () 

let r=Math.max(2,5,6,7,19,89);

console.log("max value : "+r);
