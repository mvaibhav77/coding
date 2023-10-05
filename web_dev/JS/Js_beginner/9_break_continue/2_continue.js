for(let counter =0 ; counter<10;counter++)

{
// continue is used to skip the current iteration and move to the next iteration 

    if  (counter==5)
    {
       continue;
    }

// here we see that as we wrote continue at the value of counter = 5 means that as soon as counter reaches 5 the condition becomes true so the print and next line statement are not executed for 5 as we continued the loop to 6 th iteration !! this is what is meant by continue skip the current iteration and move to the next one

// o/p : 0 1 2 3 4 6 7 8 9 

document.write(counter);

document.write('<br>');

}