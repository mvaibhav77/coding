// functions which does not have a name is called anonymous funcion

// they are helpful and use when :

//? 1. if we want to store the function in a variable then naam hee kyu dena sedha assign karke likh do

// this is called as function expression

let show = function () {
  console.log("hello world");
};

show(); // calling using variable name 

//? 2. in adv js we use setTimeout funciton used to display a code after some delay : 

//? setTimeout(function name , delay in ms )

// why use anonymous function here ? 

// whenever we declare a name of a funciton then it has some space in the memory and its line is saved there so as to execute the functiobn whenever called , but what if we want to execute it only once ?? 

// store toh tb krte haina jb humein koi cheez baar abar krni hai yeh toh bss ek bar execute karna hai

//but with some delay execute krna hai using 'setTimeout' so here instead of giving memory space by assigning a name to the function we use anonymous function 

// to write it we directly have to paste the whole anonymous function code in the function name area 

setTimeout(function show()
    {
        console.log("hello!");

    } , 2000);