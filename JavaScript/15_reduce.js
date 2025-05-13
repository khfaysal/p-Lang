let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let result = 0;

for (let el of arr) {
  result += el;
} // here result = accumulator, result e joma kortechi seta amra accumulate korteche. and the whole process is called accumulation.]

// console.log(result);
//------------------

let num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let nums = num.reduce((acc, el, idx, arr) => acc + el);
// console.log(nums); //55
//------------------
const Charecter = [
  {
    name: "John Doe",
    hight: 6.1,
    mass: "80",
    eye_color: "blue",
    gender: "Male",
  },
  {
    name: "Jane Doe",
    hight: 5.5,
    mass: "60",
    eye_color: "blue",
    gender: "Female",
  },
  {
    name: "Kamrul",
    hight: 5.8,
    mass: "70",
    eye_color: "black",
    gender: "Male",
  },
  {
    name: "Hasan",
    hight: 5.9,
    mass: "77",
    eye_color: "black",
  },
];

//total mass:
let allmass = Charecter.reduce((acc, el) => {
  return acc + Number(el.mass);
}, 0);
// console.log(allmass); //210
//all names count:
let allname = Charecter.reduce((acc, el) => {
  return acc + el.name.length;
}, 0);
// console.log(allname);//27

//-------------------
//count colors:

let color = Charecter.reduce((acc, el) => {
  if (acc[el.eye_color]) {
    acc[el.eye_color]++;
  } else {
    acc[el.eye_color] = 1;
  }
  return acc;
}, {});

// console.log(color);


//-------------------
//Ternary operator:
let age = 22;
let m = age > 18 ? "Welcome" : "get o";
console.log(m.toUpperCase());


