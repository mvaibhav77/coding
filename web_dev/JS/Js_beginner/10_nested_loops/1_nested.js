for (let counter = 1; counter < 10; counter++) 
{
  // say if we want ki counter 3 and after that code run na ho skip ho jaaye we use break

//   if (counter == 3)
//    {
//     break;
//   }

  document.write(counter);
  document.write("<br>");

  for (let counter2 = 1; counter2 < 3; counter2++) 
  {
    // say if we want ki counter 3 pe yeh list item print hee na ho then we use break here 
    
    if (counter == 3) {
      break;
    }
    document.write("LIST ITEM");
    document.write("<br>");
  }
}
