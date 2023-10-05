// this is a keyword used in object

let person = {
  firstName: "onkar",
  locaName: "patel",

  // to access the contents of one object into another object we just simply use the object.property name

  // now say if we want to access the property of the same object inside its field then we need not have to use its name we can use the 'this' keyword here !!

  // this aate hee smjh jayega apana hee property access karna hai

  // agr dusare ka karre toh name se karte hai

  sayhello() {
    console.log(
      "hello i am " +
        this.firstName +
        " " +
        "and i have a " +
        car.name +
        " " +
        "car!"
    );
  },
};

let car = {
  name: "mercedes benz",
  model: "2022",
};

person.sayhello();
