let str=" This is a string ";

// we gave spaces at the end and at the start too inn the string 

// if we want ki yeh spaces output mei na rhe toh we use trim function 

// to see the spaces of the string select the string and highlight them you will see if there are spaces at teh end and start or not 

let trim = str.trim();

console.log(str);

// we can see in the output tha that the spaces in the trimmed string are not there anymore

console.log(trim);

// if we want to trim the spaces at the start only we use 

let trim1=str.trimStart();

console.log(trim1);

// if we want to trim the spaces at the end only we use 

let trim2 = str.trimEnd();

console.log(trim2);
