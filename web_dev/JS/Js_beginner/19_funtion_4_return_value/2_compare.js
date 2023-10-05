function compare(a,b)
{
    if(a>b) {
        return 1   ; 
    }
    else if(b>a)
    {
        return -1 ;        
    }else 
    {
        return 0 ; 
    }
}

let c = compare(2,3);

document.write(c);
document.write("<br>");

let b = compare(7,3);

document.write(b);
document.write("<br>");

let a = compare(2,2);

document.write(a);
document.write("<br>");