// function doSomething() {
//   fetch("https://jsonplaceholder.typicode.com/posts/4")
//     .then((response) => response.json())
//     .then((data) => {
//       const result = document.getElementById("result");
//       result.innerHTML = `
//         <h2 class='text-2xl'>${data.title}</h2>
//         <p>${data.body}</p>
//       `;
//     });
// }

async function doSomething() {
  const url = "https://jsonplaceholder.typicode.com/posts/10";
  const response = await fetch(url);
  const data = await response.json();
  const result = document.getElementById("result");
  result.innerHTML = `
    <h2 class='text-2xl'>${data.title}</h2>
    <p>${data.body}</p>
  `;
}

async function showDogs() {
  const response = await fetch("https://dog.ceo/api/breeds/image/random");
  const data = await response.json();
  const result = document.getElementById("result");
  result.innerHTML = `
    <h2 class='text-2xl'>${data.message}</h2>
      <img width='150' src="${data.message}" alt="Random Dog" class="w-full h-auto">
    
    `;
}
