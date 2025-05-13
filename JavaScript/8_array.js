function adder(...nums) {
  let sum = 0;
  for (let i = 0; i < nums.length; i++) {
    sum += nums[i];
  }
  return sum;
}
let nums = [1, 2, 3, 4, 5, 85];

// console.log(adder(...nums));

//-----------
let arr = [1, 2, 3, 4, 5];

let arr2 = [...arr]; // [arr2 is a 'COPY' of arr, so any changes to arr2 will not affect arr]
let arr3 = arr; // [arr3 is a 'REFERENCE' to arr, so any changes to arr3 will also affect arr]

arr[0] = 100;

console.log(arr2);
console.log(arr3);

console.log(...arr);
console.log(arr2);
console.log("hi");

//-----------[Array -> String]

let aarr = ["Kamrul", "Hasan", "Farjana", "Suchi"];
let sstr = aarr.toString();
console.log(aarr);
console.log(sstr);

//-----------[array into an array]

let kk = [
    ["Farjana", "Suchi"],
    ["kamrul", "hasan", ["jahan", "lisa"]]
];

console.log(kk[1][2][0]);
