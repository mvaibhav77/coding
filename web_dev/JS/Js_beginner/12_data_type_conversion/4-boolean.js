//* 1. conversion of number to boolean value

let type = 0;

console.log(typeof type);

let newType = Boolean(type);

// any number other than zero will be taken as true 

console.log(newType);

console.log(typeof newType);

let u = 32;

let e = Boolean(u);

console.log(e);

console.log(typeof e);


let x ="";

console.log(typeof x);

let a=Boolean(x);

// empty string is taken as false cvalue in boolean rest all are taken as true 

console.log(a);

console.log(typeof a);

// NON EMPTY STRING 

let t="onkar";

let r = Boolean(t);

console.log(r);

console.log(typeof r);