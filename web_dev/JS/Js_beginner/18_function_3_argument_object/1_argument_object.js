
function add (num1 , num2 ) 
{
    document.write(`${num1}+${num2} = ${num1+num2}`);
  
    document.write("<br>");
}

add(4,14);

// this was some function where user has to pass exact two numbers to add them 

// what if wer want to create a program where user can enter any number of terms he wants to and obtain its addition 

//eg : add (4,14) , add (4,5,6) etc.. 

// mtlb jb do number pass kare toh unka sum mile jb teen kare toh teen ka char kare toh char ka and so on ..

// here we use the arguments object which helps us create it 

// here we have a predefined array called 'arguments' in js which stores all teh passed arguments during function call

// which means if we want it to be user depeendent ki voh jitte bhi numbers pass akre humein usse add akrna hai we dont declare parameters in teh function definion as before rather we use 'arguments' array inside the function 

// ! __________________________________________________

function addition () {

    // to know the number of arguments passed in each call 

    console.log(arguments.length);

    // to know the elements of the arguments array 

    console.log(arguments);

}


addition(5,6); // 2

addition(6,7,7); // 3 

addition(1,2,3,4,5); // 5

// ! __________________________________________________

function addi ()
{
    // if we want to know the elements of the arguments array we access them index wise as in array 

    console.log("elemetn at index 0 : "+arguments[0]);

    console.log("elemetn at index 1 : "+arguments[1]);

    console.log("elemetn at index 2 : "+arguments[2]);

    //as index 3 dne means undefined 

    console.log("elemetn at index 3 : "+arguments[3]);

}

addi(2,5,6);

