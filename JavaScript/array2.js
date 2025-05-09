const Charecter = [
  {
    name: "John Doe",
    hight: 6.1,
    mass: 80,
    eye_color: "blue",
    gender: "Male",
  },
  {
    name: "Jane Doe",
    hight: 5.5,
    mass: 60,
    eye_color: "green",
    gender: "Female",
  },
  {
    name: "Kamrul Hasan",
    hight: 5.8,
    mass: 70,
    eye_color: "black",
    gender: "Male",
  },
];
//All names:
let allName = Charecter.map((element) => element.name);
// console.log(allName);

//Object with just name and hight:

let newChar = Charecter.map((element) => {
  return {
    name: element.name,
    mass: element.mass,
  };
});
// console.log(newChar);

// All first name:

let firstName = Charecter.map((element) => {
  return element.name.split(" ")[0];
});
console.log(firstName);


