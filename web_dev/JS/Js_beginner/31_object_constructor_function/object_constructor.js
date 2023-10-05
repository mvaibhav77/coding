let student1 = {
  firstName: "Onkar",
  lastName: "Patel",
  age: 22,
  year: 3,
};

// saara property same hai but value change hai alst mein object name ke sth .. toh yeh tedious task hai

// toh iske liyea object constructor laaya gaya

// class mbhi hai js mei but voh es-6 se valid hua voh bhi dekhenge aage

let student2 = {
  firstName: "Hemant",
  lastName: "Jagyasi",
  age: 20,
  year: 3,
};

// jb humein blueprint banana ho jb hum object constructor fucntion ka use karte hai

// using this same properties ka multiple object banana ho jaata hai asaan

// creating object constructor we create a function with the first letter of the function as capital letter as it is considered a good practice

// then we pass shorthand arguments of the property names as arguments in it

// this is called object constructor function

function Student(first, last, age, yr) {
  // this.properties = arguments ;

  this.firstName = first;
  this.lastName = last;
  this.age = age;
  this.year = yr;
}

let student3 = new Student("Onkar", "patel", 22, 3);

let student4 = new Student("hemant", "jagyasi", 22, 3);

// access object

console.log(student3);

// if we want to add a property to the object alag se we do it the old way only for every object

student4.nationality = "indian";

console.log(student4);

// if we want to add function we do it the old way for every object

student4.name = function () {
  return this.firstName + " " + this.lastName;
};

// calling

console.log(student4.name());

//abhi tk toh hum propety add krre the voh object mei karre there alag se if we want ot add the property to the object constructor function only we do it as :

function Student(first, last, age, yr) {
  this.firstName = first;
  this.lastName = last;
  this.age = age;
  this.year = yr;

  // asie hee karna hoga

  // isse hrr jagah nationality indian hojayega '

  this.nationality = "indian";

  // we can also add the function the same way too :

  this.name = function () {
    return this.firstName + " " + this.lastName;
  };
}
