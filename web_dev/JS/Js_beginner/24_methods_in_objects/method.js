let person = {
    firstName : 'onkar',
    lastName : 'patel'
}

person.age = 30;

// say if we want to add any action to person object that we created

//! 1.

//for this syntax is : 

// objectname.actionname = anonymous function

// say we want to create an action of say hello in js we do it this way : 

person.sayhello = function(){
    console.log('Hello!');
}

// calling 

person.sayhello();

// ! 2. 

// we can also create a new action this way 

function greet(){
    console.log('Hello guys');
}

// connecting this to the person object that we created 

// syntax : 

//objectname.actionname = function name ; no() remember 

person.hello = greet;

// calling 

person.hello();

// ! 3.

//we can declare the action name inside the object {} field and add the annonymous funtion there 

// action name : funtion(){}

let person2 = {
    firstName : 'onkar',
    lastName : 'patel',
    say : person.sayhello = function(){
        console.log('Hello!! anonymous ');
    }
}

// calling 

person2.say();

// ! 4. 

// here we declare it same inside the object {} field but direcctly start the funtion operation : 

// syntax : actionname(){ function code }

let person3 = {
    firstName : 'onkar',
    lastName : 'patel',
    sayhi () {
        console.log('Hii !');
    }
}

// calling 

person3.sayhi();