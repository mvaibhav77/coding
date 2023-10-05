 let msg = "hello main party ";

 function message(){
    console.log(msg);
 }

message();

 // ! ADVANCE    

// there are various libraries used in js ... 

// we dont know what is written in there ... also if similar code is written in the third party / same variables etc .. then toh yeh problem hai 

//toh isse bachne ke liyea hum uss code ko immediately invoke kardenge tb error throw nhi krega 

//! ERROR msg has already been declared 

// so to overcome this we convert the third party code into immediately invoked code isse kya hoga code execute bhi hoga and no conflict 

// apane code ko toh hum global space mei likhe hai toh third party code ko local space bana do annonymous and immediately invoked 