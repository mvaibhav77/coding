let counter = 2;

let sum=0;

while (counter<=100 )
{
if (counter%2==0)
{
    sum+=counter;
    counter++;
}

else {
    counter++;
}
}

document.write(sum);