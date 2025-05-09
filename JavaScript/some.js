//sobgula check korar por ekta boolian value return korbe.


let arr = [1, 2, 3, 4, 5];
let isEven = arr.some((el) => {
  return el % 2 == 0;
});
// console.log(isEven);
//----------
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

  //all blue eyes:

  let ab = Charecter.some((el) => el.eye_color == "blue");
  console.log(ab);
  