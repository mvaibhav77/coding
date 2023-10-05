//   addition program for various inputs by the user 

function add() {
  if (arguments.length == 0) {
    console.log("no values passed !! ");
  } else {
    let sum = 0;
    for (i = 0; i < arguments.length; i++) {
      sum += arguments[i];
    }
    console.log(sum);
  }
}

add();

add(2);

add(3,3,4);

add(5,15);

// if we store the funtion in a variable we can not only now call the function by the name of the function but the cvariable as well 

let a = add;

a(5,7,19);