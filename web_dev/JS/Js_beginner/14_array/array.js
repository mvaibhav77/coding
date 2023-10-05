//* declare an array 

// elemetns in array are stred inside the []

// if theya re string then enclose them under " " inside the []

// if not stirng string then write them separating using commas

//! way1 

let books = ["maths","chemistry","physics"];

//! way 2

let book = new Array("maths","chemistry","physics");

// to print the lemets or content of the array we need to give index of them 

// in array teh index starts from 0 !

console.log(books[2]);

let number = [1,2,3,4,5,6,7];

// number at index 3 

console.log(number[3]);

// if we want to display all teh contents of the array we simply write the name and not the index 

console.log(books);

console.log(number);

// if we want to update the content of the array we do it this way : 

books[1] = "english";

console.log(books);