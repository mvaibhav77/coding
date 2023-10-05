// * hoist means to lift or to pull is called hoisting 

// * js ka default behaviour hai ki saare decleration sirf decleration ko uthake sbse upar le aata hai during the interpretation of the code : as per current scope 

// * means global ko global ke top pull karega local ko local ke top pull krega 

//! works for function and var only 

// ? for declaring a function 

function hello(){
    console.log('hello world ');
}

// calling 

hello(); 

// even if we call first and then declare js mei voh sb jagah function name ko scan krta hai and then declared wale statements ko apane aap interpret karne ke tym sbse upar laake rkh deta hai 

// then executes them this is called hoisting that is to lift / to pull thungs according to need

// isisliyea this still works 

hii();

function hii(){
    console.log('hii');
}

// ? for variables 

var x;

// remember when ever we declare a variable in js and dont assign a value js automatically assign a value as undefined to it 

// * so if we call it before assigning a value then we recieve the value undefined 

console.log(x);

x=7;


// * if we declare and assign in the same line 

var y = 7;

console.log(y);

// * what if we write 

z=3;

console.log(z);

var z;

// here too hoisting works but only with var and not with let 


// hoisting sirf decleration ko upr leejaata hai eg: 

console.log(c);

c=3;

// bss iss deleration ko hoisting mei upar loe jayega not the assignment 

// means output undefined hee aayega 

var c;

//eg: 2

console.log(t);

// altough yahan delare adn assign dono krdiya but hoisting sirf decleration ko upar lejaata hai 

// hence abhi bhi undefined 

var t =6;

// ! inshort if we call before assignment of variable the output will be undefined 

// ! this does not work for let / const declarations