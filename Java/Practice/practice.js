// ARRAY **
const arr = ["mango", "apple", "banana", "orange"];
console.log(arr[3]); //orange

const num = [1, 2, 3, 4, 5, 6];
console.log(num[5]); //6

//Iterating ARRAY
arr.forEach((el) => {
  console.log(el);
  console.log(el.toUpperCase());
});

// Nested OBJECT ***
const info = {
  name: "Kamrul Hasan",
  age: "24",
  school: {
    First: "NN Govt Boys High School",
    Second: "Collectorate School & Collage",
  },
  address: "Dattapara, DSC",
};
console.log(info.name); // Kamrul Hasan
console.log(info.school.First); // NN

// FUNCTION
function doSomthin(name) {
  console.log("What's you name?");
  console.log("the name is ", name);
}
doSomthin("Faysal");
