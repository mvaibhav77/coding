// math object is used to generate random number 

//Math.random()

let x=Math.random();

// this generates rnadom number between 0-1 for every reload u have a different output value

console.log("random number between 0-1 : "+x);

// ? if we want to generate the number between 0-9 how ??

// jis bhi number tk karna hai uske ek upr se multiply karna hai 

// trunc used to remove the decimal numbers 

// * 10 made sure we had something before the decimal place

let y = Math.trunc(Math.random() * 10) ;

console.log("random number between 0-9 : "+y);


// ? if we want to generate the number between 0-10 how ??

// as we want till 10 : means * 11

// trunc used to remove the decimal numbers 

// * 10 made sure we had something before the decimal place

let z = Math.trunc(Math.random() * 11) ;

console.log("random number between 0-10 : "+z);


// 0-99 means : multiply by 100

let t = Math.trunc(Math.random() * 100) ;

console.log("random number between 0-99 : "+t);

// if we want ki 1-10 aaye means simply make for 0-9 and add one at the end 

let h = Math.trunc(Math.random() * 10) + 1 ;

console.log("random number between 1-10 : "+h);

// now say if we are given 15-25 ke beech so in such cases we use a formulae which is : 

//Math.trunc(Math.random() * (U.L. - L.L.)) + lower number ;

// but remember that this will give us a number form 15 - 24 .. 25 will be excluded here 

let m = Math.trunc(Math.random() * (25 - 15)) + 15 ;

console.log("random number between 15-25 : "+m);

// making this using functional formulae: 

function getRandom(min , max) {

    let m = Math.trunc(Math.random() * (max - min)) + min ;

    console.log(`random numbers between -> ${min} - ${max} : ${m}`);
}

// here this means 10-19 milega 20 will not be included in here 

getRandom(10,20);

// if we want ki max wala jo exlcude hora tha voh include hojaye we do min + 1 inside the Math.ransom() 

function getRand(min , max) {

    let m = Math.trunc(Math.random() * (max - min + 1 )) + min ;

    console.log(`random numbers between -> ${min} - ${max} where ${max} is included : ${m}`);
}

getRand(10,20);
