import './App.css';

function App() {

  const fact = [
    "The name of my country is Bangladesh",
    "The capital of Bangladesh is Dhaka",
    "The currency of Bangladesh is Taka",
    "The language of Bangladesh is Bangla",
    "The population of Bangladesh is 170 million",
    "The area of Bangladesh is 147570 sq km",
    "The national flower of Bangladesh is Shapla",
  ];

  const person = [];
  fact.forEach((p) => {
    person.push(<li>{p}</li>);
  })
  // console.log(person);

  return (
    <section>
      <h1>bFacts about Bangladesh</h1>
      <ul><b>{person}</b></ul>
    </section>
  )

}

export default App
