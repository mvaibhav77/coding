// define adn declaration of a function

// when we declare a function then the elements inside the () are called the parameters of  the function

// function name ( parameters )

// when we call the funciton then we pass arguments inside the () of the function

// name (argument)

// parameter 'num'

function mul(num) {
  for (i = 1; i <= 10; i++) {
    document.write(`${num} x ${i} = ${num * i}`);

    document.write("<br>");
  }
}

// argument = value passed = '5'

mul(5);

document.write("<br>");

mul(12);
