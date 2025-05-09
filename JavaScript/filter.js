let num = [1, 2, 3, 4, 5, 7, 9, 11, 12, 14, 16];
let Jor = num.filter(function (el, idx, arr) {
  return el % 2 == 0;
});
// console.log(Jor);
//---------
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

//Mass<71:

let newMass = Charecter.filter((el) => el.mass < 71);
// console.log(newMass);

// Only Male:
let mC = Charecter.filter((el) => (el.gender == "Male"));
console.log(mC);

//