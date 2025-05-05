let person = {
  name: "Kamrul Hasan",
  addr: {
    city: "Panchagarh",
    zip: 5020,
  },
  interest: ["C++", "Js", "Python", "Java"],

  sayHello() {
    console.log("Hello ", this.name);
  },
  printInterest() {
    this.interest.forEach(
      /*function*/ (el) => {
        console.log(this.name + " likes " + el);
      } /*this*/
    ); // [ passing person/this object as the second argument, we can weite 'person' instead of 'this']
  },
};

// person.sayHello();
person.printInterest();
// [undefined: because in function this refers to the global object]
