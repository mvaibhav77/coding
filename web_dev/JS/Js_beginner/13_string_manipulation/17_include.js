let str = "this is a String";

// if we want to knwo whether the sub string or character is there in the string or not we use indexof which gives -1 as output if not there 

// we can also use includes it gives the value true or false for the character / substring we are searching for in the given string 

let str1 = str.includes('html');

// output false as html does not exist 

console.log(str1);

//a s String is there hence true o/p 

let str3 = str.includes('String');

console.log(str3);