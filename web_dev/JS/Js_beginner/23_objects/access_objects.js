// access object items 


let object = {

    firstName: 'John',
    lastName: 'Smith',

};

// to access them we use 
// . 'dot operator' / 
// [] 'array index style'

console.log(". operator method : "+object.firstName + ' ' + object.lastName);

console.log("[] method : "+object['firstName'] + ' ' + object['lastName']);

// if we want to know about all the content of the object we simply output the name of it as we did in array to know array elements 

console.log(object);

let object2 = {

    'first Name': 'onkar',
    'last Name': 'patel',

};

// but if we have property names with spaces between them . ' dot operator' dosent work here 

// here we need to use the [ ] brackets way 

// space dete hee dot notation kaam krna band kardeta hai remember 

// it is ideal to use dot niotation so we should not give space in property names in general rather use camel notation 

console.log("[] operator property : "+object2['first Name'] + ' ' + object2['last Name']);

console.log(object2);

// if we try to print something that is not defined in the object scope : undefined  

console.log("as age not defined means undefined : "+object2.age);