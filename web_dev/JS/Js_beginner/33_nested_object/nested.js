// creating an object

let user = {
  id: 003,
  email: "user@example.com",

  // creating object inside object

  // for this we write a property name jiska object banayenge and then {} means ab uss property ka ek object ban gaya hai

  personalInfo: {
    name: "Personal Information",

    // creating another object inside of it

    address: {
      street: 69,
      qNo: "1/C",
      sector: 6,
      city: "bhilai",
      country: "India",
    },
  },
};

// access them 

console.log(user);

// now to access the nested object inside the user object we do the normal dot operator only 

console.log(user.personalInfo);

// to access address awe need to go to user then personalInfo then address 

console.log(user.personalInfo.address);

// now if we want to access the property of address 

console.log(user.personalInfo.address.country);
