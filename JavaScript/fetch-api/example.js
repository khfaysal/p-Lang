// const url = "https://jsonplaceholder.typicode.com/posts/1";
// fetch(url)
//   .then((response) => response.json())
//   .then((data) => {
//     console.log(data);
//   });

//or:
// fetch(url)
//   .then(function (r) {
//     return r.json();
//   })
//   .then(function (data) {
//     console.log(data);
//   });

//OR:
// const response = await fetch(url);
// const data = await response.json();
// console.log(data);

//OR:[using async function]
async function fetchData() {
  const url = "https://jsonplaceholder.typicode.com/posts/4";
  const response = await fetch(url);
  const data = await response.json();
  console.log(data);
}
fetchData();