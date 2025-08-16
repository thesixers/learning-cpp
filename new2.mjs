// import { func1, innerFunc } from "./new.mjs";
// import { string } from "./new.mjs";

// innerFunc()

// const name = new string("Nathan");
// const name2 = new string("Kelvin")

// console.log(name.length);
// console.log(name.toLowerCase());
// console.log("the last changed name: " + name.chars);

// // 
// console.log("\n=======================================\n");

// console.log(name2.length);
// console.log(name2.toLowerCase());
// console.log("the last changed name2: " + name2.chars);

// const print = (message) => console.log(message);
const print = console.log;

const newArray = [34, 12, 5, 78, 3, 67, 89, 23, 45, 10, 9, 11, 2, 99, 56, 1, 8, 19, 30, 4];
let count = 0;

console.log("Original array: " + newArray);


for(let k = 0; k < 20; k++){
    for(let a = 0; a < 20; a++){
        if(newArray[a] > newArray[k]){
            let temp = newArray[k];
            newArray[k] = newArray[a];
            newArray[a] = temp;
        }
        count++;
    }
}

// for (let i = 0; i < 19; i++) { // 20 elements → 19 passes
//     for (let j = 0; j < 19 - i; j++) {
//         if (newArray[j] > newArray[j + 1]) {
//             let temp = newArray[j];
//             newArray[j] = newArray[j + 1];
//             newArray[j + 1] = temp;
//         }
//         count
//     }
// }


console.log("Sorted array: " + newArray);
console.log("Total iterations: " + count);

class Person{
    constructor(name, age){
        this.name = name;
        this.age = age;
    }

    // Method to return public information
    publicInfo(){
        return `Name: ${this.name}, Age: ${this.age}`;
    }
}

const user1 = new Person("John", 30);
const user2 = new Person("Jane", 25);

console.log(user1.name);
console.log(user2.publicInfo());
print("user1: " + user1.publicInfo());