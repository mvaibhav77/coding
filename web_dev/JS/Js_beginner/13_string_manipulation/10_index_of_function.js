let str="This is a String in JS is";

// .indexOf('character or string that we want to know about ')

// this will print the starting posi of the string / character we entered 

let position=str.indexOf('String')

console.log(position);

// as we have many is in the string if we simply write is it will give the posi of is in This string 

// this gives the firs cocurence of is in the string

let pos1 = str.indexOf('is');

console.log(pos1);

//if we want to know about the other is  we need to mention the starting index jahan se hum chahte hai ki searching chalu ho 

let pos = str.indexOf('is', 4)

console.log(pos);

// if we want to search from the last we use last characterIndexOf keyword 

let pos2 = str.lastIndexOf('is');

console.log(pos2);

// if we search for something that does not exist in the string then the output is -1 

let pos3 = str.lastIndexOf('iss');

console.log(pos3);