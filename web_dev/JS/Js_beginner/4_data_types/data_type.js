// 1. there are several types od data , data types are introduced to tell the machine which type of data is being stored in here 

// 2. also we know that in c / c++ when we once declared a data type say int a ; now this  cant be a float in near future means that the data type once defined here cant be changed .

// 3 .where as in java script we can change the data type as much as we want during the course of the program .

// eg: changed the data type of x integer to string 

let x=5; //integer

console.log("varaible x assigned as an integer : "+x);

let j = 20.67; //decimal point number

console.log("varaible j assigned as a decimal point number : "+j);

x='hello'; //string 

// now as recent initialisation of variable x is string hello hello will be displayed 

console.log("varaible x assigned as a string : "+x);

//* usign single and double quotes !!

// say if we want to display single('') quote within the string that we write we close them under "" and provide a single quote to the string wherever required  

let y= "hel'lo";

console.log("string y : "+y);

// say if we want to display double("") quote within the string that we write we close them under '' and provide a single quote to teh string wherever required 

let z = 'hel"lo';

console.log("string z : "+z);


// say if we  want to have a single quote inside a single quote / double quote inside a double quote we must write it witth a \ to it . eg: 

let a = "hel\"lo";

console.log("string a : "+a);


let b = 'hel\'lo';

console.log("string b : "+b);


//* BOOLEAN TRUE / FALSE 

let g =2>3;

// as 2 is not greater than 3 it will return false 

console.log("g : "+g);

let h =2<3;

// as 3 is  greater than 2 it will return true

console.log("h : "+h);


// ARRAY  : declared and displayed as follows :

let l = ["onkar , ravi , aman"];

console.log("l : "+l);


//  OBJECT : declarred as follows

let u = {name : "onkar" , age : 22};

//UNDEFINED this is also a kind of data type 

let t;

console.log("t : "+t);

// if we write it as blank string then it is not considered a undefined . ab undefined nahi aayega 

let i="";

console.log("i : "+i);

// to know the data type of anything we use type of keyword there 

let r = typeof 10;  // number type

//1.  the output will be number as 10 is a number 

console.log("r : "+r);

let c = typeof 'onkar'; // string type

//2.  the output will be string  as 'onkar' is a string

console.log("c : "+c);

//3. we can see the type this way too 

let q = 'onkar'; // string type

console.log("type of q is : "+typeof q);

//TEMPALTE LITERAL 

let s='onkar'

console.log(`${s} patel`);
