console.log("---------i---------");

for (let i = 0; i <= 10; i++) {
  console.log(i);
}
// console.log(i);    /* This will throw an error because 'i' is not defined outside the loop, violating the block scope of 'let'*/
console.log("---------j---------");

let j = 0;
for (; j <= 10; j++) {
  console.log(j);
}
// console.log(j);

console.log("---------k---------");

for (var k = 0; k <= 10; k++) {
//   console.log(k);
}
console.log(k);
 