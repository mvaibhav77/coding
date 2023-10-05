// .prototype is used to add properties to the object constructor function directly ourtside the {} contsainers 

function Student(first, last, age, yr) {
  
    // this.properties = arguments ;

  this.firstName = first;
  this.lastName = last;
  this.age = age;
  this.year = yr;
}

// if we want to add properties to constructor function we can add it directly inside the constructor as seen before

// prr nahi agar humein property neeche alg se as we did for object karna hai add toh kaise :

// aisa karne se nationality add nahi hoga aise sirf object ke liyea valid hai not elsewise

Student.nationality = "indian";

let student1 = new Student("onkar", "patel", 22, 3);

// see no nationality added here

console.log(student1);

// ? using prototype method we can add properties adn fucntion toh the object constructor function

// adding property 

//   Object-constructor_name.protoype.property_name = ;

Student.prototype.nationalty = "indian";

// adding function 

Student.prototype.name = function(){
    return this.firstName + " " + this.lastName
}


// now it is added the nationality property

// also we can see taht we added a name() funtion in it 

console.log(student1);

console.log(student1.name());
