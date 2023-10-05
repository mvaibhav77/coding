// funcitons used to interact wuth the user : alert confirm and prompt

//1. alert : shows a message on the screen 

//2. prompt() : shows a message , input text . it "returns the text" on OK or , if cancel button or esc is clicked , "null" . 

//3. confirm() : shows a message, confirm with "OK" or"Cancel" . it returns true and false for OK and Cancel button.


//  NOTE : all these pause the script execution the rest of the javascript code is not executed until the process of alert prompt or confirm is completed. also the user cant interact with teh page means page ke upr ke pop up aa jaata hai and page se interaction khtm hiojaata hai ....


alert("WELCOME !!!");

// if we want to store the data entered at prompt comment by the user we can ..

// if we want ki ek default value aaye then we put default calue inside the prompt bracket after a , 

let age=prompt("ENTER YOUR AGE !",22);

// now the age 22 will be displayed in the text field by default

// if we dont enter anything and press cancel the else statement is executed 

if(age!=null)
{
    document.write(`<br> your age : ${age}`);
}else{
    document.write(`<br> your age is null`);
}

// confirm ko bhi agr store karwana hai toh store kr skte hai 

let response=confirm("you want to submit ???");

if(response) // means if true 
{
    document.write("<br>submitted");
}else{
    document.write("not submitted");
}