let arr = ["Kamrul", "Hasan", "Faysal", "Lisa"];
let pro = [];
for (let i = 0; i < 5; i++) {
  console.log(arr[i]);
  pro.push("Pro" + arr[i]); //[add "Pro" before each name]
}
console.log(pro);