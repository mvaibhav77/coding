// current date : 

let x = new Date();

console.log(x);

// say if we want to know what will be the date 30 days after today : 

// it is like set new date by getting current date and adding req number of dayz 

 x.setDate(x.getDate() + 30);

 console.log(x);