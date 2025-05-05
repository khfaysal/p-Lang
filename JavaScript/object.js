let person = {
  name: "Kamrul",
  age: 25,
  city: "Dhaka",
  sayHello: function () {
    console.log("Hello, " + this.name);
  },
};

person.sayHello();

console.log(person.asfdasfsfasf); // undefined

// Manually Add:
person.fav_Lang = 'JavaScript';
person.phone = '01712345678';

// Delete:
delete person.phone;

// Print (two ways):
console.log(person.name);
console.log(person['name']);

person.sayHello();
person['sayHello']();

//My Invetion:
console.log((typeof person.sayHello).toUpperCase()); //[my invention]

// Loop through object:

for (let el in person) {
  if (typeof person[el] == "function") {
    person[el]();
  }
//   console.log(el);
  console.log(person[el]);
}


