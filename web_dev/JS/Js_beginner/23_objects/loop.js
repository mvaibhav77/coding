let person = {

    firstName: 'onkar',
    secondName: 'patel',

};
person.age=22;

// say if we want to visit each of the properties of the object list once we use for loop 

// usign the for in loop we can iterate all the properties of the object list

for(let key in person){

console.log(key);

}

// if we want to access the value too then we must remember ki [ ] array wala notation hee work akrega 

for(let key in person){

    console.log(key + ": "+person[key]); 
    
    }