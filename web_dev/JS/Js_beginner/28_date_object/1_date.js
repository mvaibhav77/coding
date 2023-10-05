// Date object 

// defining a object x yahan define karne ak treeka thoda alg hai 

// ? no parameters passed 

let x = new Date();

// this stores the date as it is on my computer the same format , aklong with the time zone 

console.log(x);

// ? if we want to set format then we do it this way 

// total 7 parameters can be passed 

// Date (year , month (0-11) " 0-Jan & 11 is Dec " , Day , Hour , Minute , Second , Millisecond)

let y = new Date(2022 , 9 , 12 , 12 , 10 , 50 , 40);

console.log(y);

// ?  if we dont put seconds or milli seconds or other parameters koi frk nhi pdega bss 0 hota jayega bss

// minimum we have to give an year and a month 

// default date 1 and time 00:00:00 

let z = new Date(2022 , 9);

console.log(z);

// ? we can also pass in string format 

let t = new Date("october 13 , 2022 11:13:50:44");

console.log(t);

//? yeh jo computer hai voh humei output to format mei dera but stores in milliseconds in backend 

// * if we want to see it in milli seconds then 

let u = new Date("october 13 , 2022 11:13:50:44");

console.log("milliseconds : "+u.getTime());

// * only year 

let u1 = new Date("october 13 , 2022 11:13:50");

console.log("year : "+u1.getFullYear());

// * month 

let u2 = new Date("october 13 , 2022 11:13:50:44");

console.log("month : "+u2.getMonth());

// * date 

let u3 = new Date("october 13 , 2022 11:13:50:44");

console.log("date : "+u3.getDate());

// * hour 

let u4 = new Date("october 13 , 2022 11:13:50:44");

console.log("hour : "+u4.getHours());

// * minutes 

let u5 = new Date("october 13 , 2022 11:13:50:44");

console.log("minutes : "+u5.getMinutes());

// * seconds 

let u6 = new Date("october 13 , 2022 11:13:50:44");

console.log("seconds : "+u6.getSeconds());

// * milliseconds 

let u7 = new Date("october 13 , 2022 11:13:50:44");

console.log("milliseconds  : "+u7.getMilliseconds());

// * day 

// day starts as :  0 "sunday" - 6 "saturday"

let u8 = new Date("october 13 , 2022 11:13:50:44");

console.log("Day : "+u8.getDay());
 
