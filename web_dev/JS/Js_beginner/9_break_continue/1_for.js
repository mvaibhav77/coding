for(let counter =0 ; counter<10;counter++)

{
// break is used to skip teh loop as soon as the condition before it is mentioned or achieved 

    if  (counter==5)
    {
        break;
    }

// here we see that altough we wrote the loop for upto < 10 as we decided to break and skip loop as soon as counter reachers 5 the output is only from 0-4

// o/p : 0 1 2 3 4 

document.write(counter);

document.write('<br>');

}