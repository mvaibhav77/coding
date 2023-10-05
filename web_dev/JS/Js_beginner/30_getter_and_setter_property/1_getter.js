// ? getter used when we want to manipualte the data isnide the object itself and send it outside 


let person = {
    firstName: 'Onkar',
    lastName: 'Patel',
}

person.age = 22;

console.log(" Output : "+person.firstName);

// say if we want the output to be in all upper case we do 

console.log("Upper Case : "+person.firstName.toLocaleUpperCase());

// but say humein aisa nahi karna humein aisa bhr aake kuch change nhi krna hai 

// jo bhi ho voh object ke andr hee krna hai 

// means ek method declare karenge andr hee 

// agr humein kuch preprocessed jo treeke ka hum output chahte hai whi cahiyea toh hum 'get' ka use krte hai 

let person1 = {
    firstName: 'Onkar',
    lastName: 'Patel',

    getname: function(){

        // this signifies the properties of the same object in which the function is declared means all the string calues of the object are converted to upper case now !

        return this.firstName.toLocaleUpperCase();

    }

    // humne kya kiya ek function banake andr hee kaama krdiya 
   

}

person1.age = 22;

console.log(person1.getname());

// yahan lekin hum property access karne ke jaagh ek method ko access karre hai

// if we want them to be called as a property and not a function we use getter and setter 


let person2 = {
    firstName: 'Onkar',
    lastName: 'Patel',

    // here get and then function anme written directly 

    get getname()
    {

        return this.firstName.toLocaleUpperCase();

    }

}

person2.age = 22;

// now we ahvent given any () to getname this is being called as a property

console.log(person2.getname);



