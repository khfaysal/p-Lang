// ARRAY FUNCTION PRACTICE

// 1. push method

const fruit = {
  apple: 5,
  banana: 3,
  cherry: 8,
  date: 2,
};

fruit.orange = 4; // Example: add a new property
// console.log(fruit);

/*In JavaScript, push and pop are methods for arrays, not objects. The fruit variable is an object, so you add a new property by simply assigning a value to a new key (e.g., fruit.orange = 4). This creates or updates the property directly on the object.*/

const food = ["rice", "dal", "fish", "meat"];

food.push("vegetables");
// console.log(food); // updated food array with "vegetables" added at the end

// 2. filter method

const items = [
  { name: "Bike", price: 100 },
  { name: "TV", price: 200 },
  { name: "Album", price: 10 },
  { name: "Book", price: 5 },
  { name: "Phone", price: 500 },
  { name: "Computer", price: 1000 },
  { name: "Keyboard", price: 25 },
]; //items is an array of objects

const filteredItems = items.filter((item) => {
  return item.price <= 100;
});

const ft = items.filter((item) => {
  return item.price == 100;
});

// console.log(items); // This will log the original items array
// console.log(filteredItems); // price less than or equal to 100
// console.log(ft); // price equal to 100

// 3. map method

const itemNames = items.map((items) => {
  return items.name && items.name.toUpperCase();
});
const itemPrice = items.map((items) => {
  return items.price;
});
// console.log(itemPrice); // This will log an array of item names in uppercase
// console.log(itemNames); // This will log an array of prices

// 4. find method
const foundItem = items.find((items) => {
  return items.name === "Book";
});
// console.log(foundItem); // { name: 'Book', price: 5 }

// 5. forEach method [does not return anything]

const itemList = items.forEach((items) => {
  //   console.log(items.price); // This will log each item's price
});

// 6. some & every method method [returns true or false]

const hasCheapItems = items.some((item555) => {
  return item555.price <= 100;
});
// console.log(hasCheapItems); // true

// ---[check all the items are less than or equal to 1000]
const hasValuable = items.every((item55) => {
  return item55.price <= 1000;
});
// console.log(hasValuable); // true

// 7. reduce method

const totalPrice = items.reduce((currentTotal, item) => {
  return currentTotal + item.price;
}, 0);
// console.log(totalPrice);

// 8. include method

const numbers = [1, 2, 3, 4, 5];
const hasNumber = numbers.includes(6);
console.log(hasNumber); // false
