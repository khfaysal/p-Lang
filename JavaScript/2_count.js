let str = "kamrul hasan";

let count = {};

for (let i = 0; i < str.length; i++) {
  if (count[str[i]]) {
    // [if the character already exists in the count object then it will increase the count by 1]
    count[str[i]] += 1;
  } else {
    count[str[i]] = 1;
  }
}
console.log(count);
