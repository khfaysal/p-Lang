let num = [];
for (let i = 1; i <= 100; i *= 2) {
  num.push(i);
}
// console.log(num);

//-----------

let nums = [2, 3, 5, 7];

let newArr = nums.map(function (element, idx) {
  return element * 2;
  // console.log(idx);
  // console.log(element);
});
// console.log(newArr);

//-----------
let numss = [2, 3, 5, 7];

let newArrr = numss.map(function (element, idx, arr) {
  if (element < 5) {
    return element;
  }
});
// console.log(newArrr);
//-----------

let nu = [2, 4, 7];
// let nuArr = [...(nu * 2)];

// console.log(nuArr);

//-----------
let ar = [1, 2, 3, 4];
let nAr = ar.map((element) => {
  return element * 2;
});

console.log(nAr);
//-----------
let a = [1, 2, 3, 9];
let b = a.map((element) => element * 2);
console.log(b);
//-----------
