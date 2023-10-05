
outer: for (let counter = 1; counter < 10; counter++)  // anme outer: given with a (:)
{

  document.write(counter);
  document.write("<br>");

  for (let counter2 = 1; counter2 < 3; counter2++) 
  {

    // what if we want ki yeh wala jo break hai yeh outer loop ke liyea lage and not for the inner one but we want to write it inside the inner one ? 

    // in such case we use label for a loop : giving label means giving a name to the loop and mentioning the name when we use a command for it so as to specify which loop should be worked upon for this line of code

    // similar way we can also use it for continue also 

    if (counter == 3) {
      break outer;
    }
    document.write("LIST ITEM");
    document.write("<br>");
  }
}
