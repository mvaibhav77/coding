// ? = operator 

let x;

x=5;

let y=1;

// y is assigned the value of x 

y = x;
 
console.log(y);

let z;

// ? + operator 

z = x + y;

// as y is also 10 now so the sum will be 10+10 = 20 

console.log("additon 5+5 : "+z);

//  ? multiplication operator 

z= x*y;

console.log("multiplication 5*5 : "+z);

//? division operator

z= x/y;

console.log("division 5/5 : "+z);

//? modulus operator

z= x%y;

console.log("modulus 5%5 : "+z);

//? exponent operator

// for exponent we use double stars (**) i.e. to teh power 

z= x**y;

console.log("exponent 5^5 : "+z);

// if we want to incerease or decrease a variable by just one we use this kinda increment operator 

//? increment operator
console.log("value of x at present : "+x);

x++;

console.log("value of x after x++ increment  : "+x);


//? decrement operator

console.log("value of x at present : "+x); 

x--;

console.log("value of x after x-- decrement : "+x);


let r=4;

console.log("value of r : "+r);

// if we want to add another 2 to it rather than writing r=r+2; we can write : 

r+=2;

console.log("value of r incremented by 2 : "+r);

// similarly if we want to add / sub / div / mod etc .. two variables we can write it as x+=y;

let u= 3 , v=5;

console.log("value of u : "+u);

console.log("value of v : "+v);

console.log("value of u incremented by v u+=v : "+(u+=v));

// if we want to subtract another 2 from it rather than writing r=r-2; we can write : r-=2;


// here too the BODMAS rule is applied so if we want a certain operation to be performed first we need to close them inside brackets 

let q=6;

let e= q+5/5;

// the value of this will be 7 as according to bodmas divison is performed first 

console.log("value of e=q+5/5 : "+e);

// if we want the addition to ber performed first we should enclose them withing brackerts 

let j= (q+5)/5;

// now the output will be 2.2 as added first then divided means 11/5 = 2.2 !

console.log("value of j=(q+5)/5 : "+j);









