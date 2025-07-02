async function fetchBooks() {
  const url = "http://localhost:3000/books";
  const response = await fetch(url);
  const data = await response.json();
  console.log(data);
}
fetchBooks();
