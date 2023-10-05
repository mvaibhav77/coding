let person = {

    Name: "Onkar",

    age: 22,

    set setName(n){
        this.Name = n.toUpperCase();
    },

}

// if we want ot modify name we did : aise set krre hain

//person.firstName = 'John';

// now say we want to create ki koi bhi string input ho save capital mei hee hona chaiyea 

person.setName = "john";

// now we can see ki input is saved as capital letters only in the object 

console.log(person);