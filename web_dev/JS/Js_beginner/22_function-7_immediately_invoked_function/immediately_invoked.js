// Immediately invoked function

// function are created when we want to repeat certain task multiple number of times ..

// variables are created when we want to store the data for using it ahead in future

// annonymous function were created by either assigning to a var or using setTimeout

// now we want ki store kyu karana hai direct call karlo then we use immediately invoked function

( function () {
 let string = "hello world";
  alert(string);

} ) () ;
 
// * Why Used ?? 

//say program mei hamare passs kuch var hai jinhe hum throughout use karenge (global var) .. but kuch aise variable hai jinka role temperary hai ... toh uss case mei immediately invoked use krte hai

// jaise string var uska use hote hee voh khtm hojayega vanish no permanent space 

// 1. not many global var .. 2. using variables for short period of time 

// also as they are local var means same name ka global var bhi declare hoskta hai .

let string = "hello world";

// - NO ERROR -

