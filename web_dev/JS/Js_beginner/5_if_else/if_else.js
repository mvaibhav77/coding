let age = 22;
//let age = 12;
let voterCard = "no";
// let voterCard = "yes";

// if condition inside ther () is it is true the instruction inside the {} will be executed immediately

// if only one statement we can remove the {} curly braces but its not a good practice so dont remove them

// if (age >= 18 && voterCard == "yes") {
//   alert(" you can vote !! ");
// } else if (age >= 18 && voterCard == "no") {
//   alert(" get voter id card");
// } else {
//   alert(" you can't vote !! ");
// }

// we can also use nested if else loop too

if (age >= 18) {

  if (voterCard == "yes") 
  {
    alert(" you can vote!! ");
  } 
  else 
  {
    alert(" get voter id card");
  }
} 

else 
{
  alert(" you can't vote !! ");
}
