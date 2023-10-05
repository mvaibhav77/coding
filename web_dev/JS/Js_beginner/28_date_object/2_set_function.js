//! we also have function to change the input if we want 

let u8 = new Date("october 13 , 2022 11:13:50:44");

console.log("Day : "+u8);
 
// lets say we modify u8 year , date , hour , day , minute , second . millisecond etc...

u8.setFullYear(2020);

console.log("Year Changed : "+u8);

u8.setMonth(4);

console.log("Month Changed : "+u8);

u8.setHours(03); 

u8.setMinutes(56);

u8.setSeconds(00);

u8.setMilliseconds(17);

console.log("Time Changed : "+u8);