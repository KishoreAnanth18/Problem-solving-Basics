let addition = (num1,num2) => {
    console.log(num1+num2);
}
let subraction = (num1,num2) => {
    console.log(num1-num2);
}
let multiply = (num1,num2) => {
    console.log(num1*num2); 
}
let divide = (num1,num2) => {
    console.log(num1/num2); 
}

let operation = process.argv[3]
let num1 = parseInt(process.argv[2])
let num2 = Number(process.argv[4])

switch(operation){
    case '+': addition(num1,num2);
                break;
    case '-': subraction(num1,num2);
                break;
    //use \*
    case '*': multiply(num1,num2);
                break;
    case '/': divide(num1,num2);
                break;
}
