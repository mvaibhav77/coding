// * NAMING RULES OF VARIABLES 

// 1. names of variable can be anything single letter a string anything

// 2.  the name of the variable must strt with a $ / _ (underscore) / a character only it cant start with a  digit 

// 3. also the names of variable cant be that of reserved words of java script 


// 4. THE NAME OF VARIABLES ARE CASE SENSITIVE MEANS THAT digit AND Digit are completely different from one another 


// * A. DECLERATION OF VARIABLES  

// 1. first type 

// var x; 

// 2. second type 

// var z;
// z=2;

// 3. third type 

var y=2;

// alert will give 2 as output at the alert msg 

alert("VALUE OF DECLARED VARIABLE Y : "+y);

// if we write it under " " / ' '  then the variable name will be displayed and not the value of the variable

// * anything within the quotes are treatd as a sring and not variable 

alert("Y treated as a string : "+"y");

// * ARITHMETIC SUM USING VARIABLES 

var x =2;

var digit = 10;

var y= x +digit;

// GIVES VALUE 12 AS THE OUTPUT in the console log 

console.log("ARITHMETIC SUM of x + digit : "+y);

// THIS KIND OF DISPALY WILL GIVE " UNIDENFINED " VALUE ERROR AS THE VALUE IS NOT ASSIGNED TO THE VARIABLE 

 var g;

 alert("as g not delared it dispalys : "+g);


// * B. DECLERATION OF VARIABLES 

// 'let' is a keyword used to declare a variable 

// the code can be a mixture of let and var dosent matter 

let i=2;

alert("declared variable i : "+i);

// * C. DECLARATION OF VARIABLES

// const is a keyword used to declare a variable when we want that its value should not be changed throughout the code 

const f=7;

// ? f=10;

// ? trying to change the value of a constant variable will give this error in the console : 

// ? variable.js:72 Uncaught TypeError: Assignment to constant variable.

// ? alert("watch console error as we tried to change the value of a const variable !!")

// ? alert(f);

//* variables can also store string in it 

let t='hi';

console.log(t);




