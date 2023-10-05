//let input = "1"; // string 1

let input   = "yes"; 

// switch case are used instead of if else if there are multiple number of cases to be comapred to match

// switch takers variable input which needs to be comapred to match

// case contains the input that we want to have and give a particular output to that input 

// as we did jnot give 1 / 0 input as a string case in switch means that when the input will be 1 / 0 as a  string form then the default case will run 

// aslo after every case output break is necessary 

switch (input) {
  case 1:
    document.write("continue..");
    break;

  case "yes":
    document.write("continue..");
    break;

  case "y":
    document.write("continue..");
    break;

  case 0:
    document.write("END..");
    break;

  case "n":
    document.write("END..");
    break;

  case "no":
    document.write("END..");
    break;

    default: 
    document.write("WRONG INPUT");
}

// we can also writer this as  if we have same output to be rpinted for many cases we write it as 

// switch (input) {
//     case 1:
//     case "yes":
//     case "y":
//       document.write("continue..");
//       break;
  
//     case 0:      
//     case "n":
//     case "no":
//       document.write("END..");
//       break;
  
//       default: 
//       document.write("WRONG INPUT");
//   }

// means jitte same output cases hai unko mention and the last case of same output pe write the output and put break 

 
// * USING IF ELSE INSTEAD OF SWITHC CASE WOULD AHVE BEEN 


// if(input == 1 || input == "yes" || input == "y" )
// {
//   document.write("continue..");
// }

// else if(input == 0 || input == "n" || input == "no")  
// {
//   document.write("END..");
// }
// else  
// {
//   document.write("WRONG INPUT !")
// }