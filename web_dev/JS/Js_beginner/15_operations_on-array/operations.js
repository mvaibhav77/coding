// length and indexOf function are same in string and in array 


let book = ["maths", "chemistry", "physics", "biology"];

// if we want to know the length of array .

console.log("size of array : "+book.length);

// if we want to push any new wlement at teh very last of the array .

book.push("hindi");

console.log(book);

// if we want to push the  element at the very first of the array.

book.unshift("english");

console.log(book);

// if we want to remove the last element of the array we use pop 

book.pop();

console.log(book);

// if we want to remove the first element of the array we use shift

book.shift();

console.log(book);

// if we want to remove the elemtn in betweeen the array 

//.splice(kaunse position se hatana hai , kitte element hatana hai in total)

// we have chemsitry at 1st index and maths at 0th index if we want to remove from the 1st index onwards we say (1) if we just want to remove one element we give the no of elements to be removed to be 1 

book.splice(1,1);

console.log(book);

// if we want to remove the whole array 

// book=[];

// console.log(book);

 // or we can also do this 

// book.length=0;

// console.log(book);

// if we want to know the positon of an element in the array we use indexOf 

let pos = book.indexOf("maths");

console.log("position of maths element : "+pos);

// also a normal variable and array are declared in same way almost

// if we want to know whether the givenvariable is array or not we use isArray instead

// gives true if array else false as an output 

let x = [0,0,0];

let y="maths";

console.log(Array.isArray(x));

console.log(Array.isArray(y));

// if we want ki ek string ka har ek word as an array store hojaye we use .split

let str = "this is a string";

// giving space inbetween the ' ' means that jahan jahan space aaye utte ko ek array element mei store kardo 

let arr = str.split(' ');

console.log(arr);

// means jaahn jahan s aayega usse pehle tk ko ek element bana do

let arrr = str.split('s');

console.log(arrr);

// if we want an array of elements to be converted into a string 

// means hr element ke baad space aajayega on joining 

let joint = book.join(' ');

console.log(joint);

let joinn = book.join('_');

console.log(joinn);

// how to combine to or more array using .concat()

let arr1 = [1,2,3];

let arr2 = [4,5,6];

let arr3 = [7,8,9];

let arr4 = arr1.concat(arr2,arr3);

console.log(arr4);


//*  multi dimensional array

let arr5 = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
           ];

    //INDEX :  00 01 02         // ELEMENTS : 1 2 3 
    //         10 11 12                       4 5 6 
    //         20 21 22                       7 8 9  


// acces elements in 2d array 

console.log("00 element of 2d array : "+arr5[0][0]);

console.log("01 element of 2d array : "+arr5[0][1]);

console.log("02 element of 2d array : "+arr5[0][2]);

console.log("10 element of 2d array : "+arr5[1][0]);

console.log("11 element of 2d array : "+arr5[1][1]);

console.log("12 element of 2d array : "+arr5[1][2]);

console.log("20 element of 2d array : "+arr5[2][0]);

console.log("21 element of 2d array : "+arr5[2][1]);

console.log("22 element of 2d array : "+arr5[2][2]);


// now say if we want ot view all the eleemnts of the first row 

console.log("row 1 : "+arr5[0]);

// view second row completely 

console.log("row 2 : "+arr5[1]);

// view third row completely

console.log("row 3 : "+arr5[2]);

// array ke andr array ke andr array 

let arr6 = [
    [1 , [2,3]],
    [4 , 5 , 6],
    [7 , 8 , 9]
]; 

// now if we want to access the element 3 

let fetch = arr6[0][1][1];

console.log(fetch);

// now if we want to access the element 2

let fetch2 = arr6[0][1][0];

console.log(fetch2);

// display array elements using loop WAY 1 : 

for (i=0 ; i<arr5.length;i++)
{
    for(j=0 ; j<arr5.length;j++)
    {
        // using tempalte literal 
        console.log(`element ${i}${j} : ${arr5[i][j]} \n`);
    }
}

// WAY 2 :  using for each

// using for each we didnt loop like previously 

// here we defined a function and passed a value toa  function  

arr5.forEach(myfu);

function myfu(value){
    console.log(value);
}