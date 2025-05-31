let i = 10;
while (i >= 1) {
  console.log(i);
  i--;
}

let j = 2;
while (j <= 10) {
  console.log(j);
  j++;
}

console.log("-------------");

let k = 10;
while (k--) {
  console.log(k);
}
console.log("outside:", k);

console.log("-------------");
let l = 10;
while (l++) {
  console.log(l);
  if (l == 20) break;
}
console.log("-------continue------");
let m = 1;
for (let m = 0; m < 10; m++) {
  if (m == 4 || m==5) continue; // [in one iteration the value of i is 4 or 5, single iteration single value, not two at a time]
  console.log(m);
}
