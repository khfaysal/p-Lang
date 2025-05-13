//Factory Function  /  Blueprint Function

function createPerson(nm, ag, inte) {
  return {
    name: nm,
    age: ag,
    interest: inte,
    sayHello: function () {
      console.log("Hello ", this.name);
    },
  };
}

let person1 = createPerson("Kamrul", 25, ["C++", "Js", "Python", "Java"]);
let person2 = createPerson("Hasan", 25, ["C++", "Js", "Python", "Java"]);

// console.log(person1);
// console.log(person2);
person1.address = "Dhaka";
// console.log(person1);

//-----------------------------------
//Constructor Function   [PascelCase -> FirstName]
function CreatePerson(nm, ag, inte) {
  this.name = nm;
  this.age = ag;
  this.interest = inte;
  this.sayHello = function () {
    console.log("Hello ", this.name);
  };
}

person1 = new CreatePerson("Kamrul", 25, ["C++", "Js", "Python", "Java"]);
person2 = new CreatePerson("Hasan", 25, ["C++", "Js", "Python", "Java"]);

// console.log(person1);
// console.log(person2);

//-----------------

class person {
  constructor(nm, ag, inte) {
    this.name = nm;
    this.age = ag;
    this.interest = inte;
  }
  sayHello() {
    console.log("Hello ", this.name);
  }
}

let person6 = new person("Kamrul", 25, ["C++", "Js"]);
// console.log(person6.sayHello());

//-----------------
//IFFY (Immediately Invoked Function Expression)

// (function Customer(){
//   console.log("IFFY -> Customer Function");
// })();

//------------------

// (function sayHello() {
//   console.log("Hello World");
// })();

// (sayHello2 = () => {
//   console.log("Hello Jupiter");
// })();

//------------------
// ((name) => {
//   console.log("hello ", name);
// })("Kamrul");

//------------------[Clock]
setInterval(function () {
  console.log("Hi There!");
}, 1000);
