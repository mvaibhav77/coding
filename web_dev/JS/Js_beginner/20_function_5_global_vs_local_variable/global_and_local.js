// Global vs Local Variable

// variable outside the functionis called a global variable

// variable inside the function is called local variable

// local variable can be used within the area of the function in which it is defined only if we use it outside the function we get 'result is not defined'

// as soon as we exit the function all the variables declared within the function are deleted from the memory... hence they cant be accessed outside the function

// hence as the variables are operationsal only within the function range means we can declare the same name variable in different functions too

// we can not declare the same name global variable as such in our program 

let a = "onkar"; //global variable name

function onkar() {
  let name = "rahul"; //local variable name

  console.log(name);

  // global variable can be called anywhere

  console.log(`calling global var outside fun : ${a}`);
}

function Sub() {
  // same name variable can be declared and no error
  let name = "hii";
}

onkar(); // calling function

console.log(`calling global var outside fun : ${a}`);
