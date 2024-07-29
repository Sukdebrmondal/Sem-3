// Problem:1
// var age=15;
// var haddrivinglicence=true;
// if(age>=18 && haddrivinglicence==true){
//     console.log("This persion eligible to drive");
// }
// else{
//     console.log("This persion not eligible to drive");
// }



// problem: 2
// var age=19;
// let result=age>=18? "This persion eligible to drive":"This persion  not eligible to drive";
// console.log(result);

// problem:3
// var score=60;
// var result=score>=60? "Student pass":"Student fail";
// console.log(result);


// console.log("5"-3); 2
// console.log(2<12<5); true
// console.log("20"+10+10); 201010
// console.log("20"+10-10); 2010-10= 2000

// type
// console.log(typeof("5"-3)); number
// console.log(typeof(2<12<5)); boolern
// console.log( typeof("20"+10+10)); string

// if-else condition:
// var temp=30;
// if(temp>30){
//     console.log("Lets to go to beach");
// }
// else{
//     console.log("Watch tv at home");
// }


// problem-1
// If the person is 18 years or older, a citizen, and registered to vote, display a message saying they are eligible to vote.
// If the person is younger than 18, not a citizen, or not registered to vote, display a message saying they are not eligible to vote.
// If the person is 18 or older but not a citizen, display a message saying they are not eligible due to citizenship status.
// If the person is 18 or older, a citizen, but not registered to vote, display a message saying they are not eligible due to registration status.
// Extended voting eligibility checker with additional conditions

// Assume the user's age, citizenship status, and registration status as inputs
// let userAge = 22;
// let isCitizen = true; // Assume true for citizen, false for non-citizen
// let isRegistered = false; // Assume false for not registered, true for registered
// var age=19;
// var citizen=true;
// var vote=false;
// if(age>=18){
//     if(citizen){
//         if(vote){
//             console.log("You are eligible for vote");
//         }
//         else{
//             console.log("you are not eligible due to registration status");
//         }
//     }
//     else{
//         console.log("you are not eligible due to chitizenship status");
//     }
// }
// else{
//     console.log("You are not eligible to vote");
// }



// problem-2
// Write a program to check if a number is even or odd.

// var num="12";
// if(num%2===0){
//     console.log("This is a even number");
// }
// else{
//     console.log("this is a odd number");
// }

// problem-3
// Write a program to check if a number is prime.









// problem-3
// Write a program to check if a number is positive, negative, or zero.
// var num=-34;
// if(num>0){
//     console.log("positive number");
// }
// else if(num<0){
//     console.log("Negative number");

// }
// else{
//     console.log("Zero");
// }



// Switch statement
// problem:2
// var day="sunday";
// switch(day){
//     case "monday":
//         console.log("Today is Monday");
//         break;

//     case "friday":
//         console.log("Today is friday");
//         break;
//     case "sunday":
//         console.log("Today is sunday");
//         break;
//     default:
//         console.log("No condition match");
// }

// problem-3
// var areaofshape="circle";
// var a=3;
// var b=5;
// var result;

// switch(areaofshape){
//     case "square":
//         result=(a*a);
//         console.log(result);
//         break;

//     case "rectangle":
//         result=(a*b);
//         console.log(result);
//         break;

//     case "circle":
//         var r=3;
//         result= 3.142*(r*r);
//         console.log(result); 
//         break;  

//         default:
//             console.log("no condition match");
        
// }


// while Loop
// problem-4

// var i=1;
// while(i<=10){
//     console.log(i);
//     i++;
// }

// table
// var i=1;
// while(i<=10){
//     // var result=5*i;
//     console.log("5 * " + i +  " = "  + 5*i);
//     i++;
// }

// Do-While loop

// var i=1;
// do{
//     console.log(i);
//     i++;
// }while(i<=10)

// for-loop
// for (var i=1;i<=10;i++){
//     console.log(i);
// }

// Ex of do-while
let userinput;
let positivenumber;
do{
    userinput=prompt("Enter the positive number");
    positivenumber=parseFloat(userinput);
}while(isNaN(positivenumber) || (positivenumber<0));
console.log("You Entered a Valid Positive Number: ", positivenumber);