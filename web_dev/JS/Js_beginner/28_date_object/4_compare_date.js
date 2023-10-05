let x = new Date();

let y = new Date("october 13 , 2020 11:44:55:60 ");

if(y > x)
{
    console.log("x is past date " + x);
}

else if(x > y)
{
    console.log("x is future date " + x);
}

else{

    console.log("both are equal");
}