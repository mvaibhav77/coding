let str="onkar";

// comapring a given input string to th erequired string 

if(str == "onkar"){
    console.log("Equal");
}else{
    console.log("Not Equal");
}

// now remember string comaprison is case sensitive means capital and small letters are considered different during comparison 

let str2="onkar";


if(str2 == "Onkar"){
    console.log("Equal");
}else{
    console.log("Not Equal");
}


// also say we need to keep in mind  the spaces too in string if we give space at the end in the declared string and comapre it with a non spcae string at teh end altough teh string will be same but the result will be not equal

let str3="onkar ";

// a space at the end is given in the declared string

if(str3 == "onkar")

// no sapce given in teh search string at the end 

{
    console.log("Equal");
}else{
    console.log("Not Equal");
}
