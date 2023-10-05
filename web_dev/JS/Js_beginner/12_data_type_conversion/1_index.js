//* + operator has 2  WORK  to add numbers and strings as well  

let type = 5+null; 

// many languages pehle line mei hee error dedenge ki number ke sath string value add karre hai whereas javascript jitta usko smjh aata hai khud hee convert karrke handle kar leta hai ..

// yahan as js dekha 5 integer mei kuch add krre toh as we know ki null mtlb kn hota hai toh voh wahana 0 add krke khud sb settle krlega 

// display value 

console.log("value of 5+null : "+type);

// display the type of value 

console.log(typeof type);


let x = "5"+null; 

// yahan as js ne dekha 5 string hai toh null ko as a  string add krega convert karke khud se hee 

console.log("value of '5' + null : "+x);

console.log(typeof x);


let y = "5"+ 2; 

// now see as here it sees the first one as string toh dusare ko bhi string mei convert karke concatenate kardega 

// O/P : 52 

console.log("value of '5' + 2 : "+y);

console.log(typeof y);


//* - operator as only one work treat as arithmetic operation toh yahan agr minus akrenge toh mathematics jaise hee kaam akrega 

let z = 5 - 2; 

// O/P : 3

console.log("value of 5 - 2 : "+z);

console.log(typeof z);


let r = "5" - 2; 

// as - ka ek hee kaam hai mathematical operation toh yahan bhale hee pehle wala string dekha but as soon as - read kiya smjh gaya string ko number mei convert karna hai and operation perform akrna hai 

console.log("value of '5' - 2 : "+r);

console.log(typeof r);


let p = "5" - "2";

// here too as both string but as beech mei - hai toh as number convert honge and rthen amthematical operation hee perform hoga 

console.log("value of '5' - '2' : "+p);

console.log(typeof p);


//* same happens as - for (*) and (/) too only (+) mei confused tha kyuki string and mathematical operation dono hee perform hote + see 

let e = "4"*"5";

console.log("value of '4' * '5' : "+e);

console.log(typeof e);

let u= "5"*"yes";

// O/P : will be NaN  (not a number) akyuki jaise hee * dekha smjh gaya number mei convert karna hai 5 ko convert kiya but jaise hee yes ke liyea aaya toh dekha yeh toh koi number hai hee nahi NaN * any thing is NaN so o/p is NaN

console.log("value of '5' * 'yes' : "+u);

console.log(typeof u);