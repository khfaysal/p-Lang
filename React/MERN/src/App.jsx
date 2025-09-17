import './App.css';

//main app component:
function App() {

  const people = [
    'Creola Katherine Johnson: mathematician',
    'Mario José Molina-Pasquel Henríquez: chemist',
    'Mohammad Abdus Salam: physicist',
    'Percy Lavon Julian: chemist',
    'Subrahmanyan Chandrasekhar: astrophysicist'
  ];
  // console.log(people);

  const persons = [];
  people.forEach((p) => {
    persons.push(<li>{p}</li>
    )
  })
  return (
    <section>

      <h1>People Lists</h1>
      <ul>{persons}</ul>

    </section>
  )
}

export default App
