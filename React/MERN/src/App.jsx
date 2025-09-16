import './App.css';

function Item({ name, isPacked }) {

  //vanilla js: controller/ logical part
  const isChecked = [isPacked ? "☑️" : null];

  //jsx: view part
  return (
    <li className="item">
      {name} {isChecked}
    </li>
  );
}

function App() {

  return (
    <section>

      <h1>Sally Ride's Packing List</h1>

      <ul>
        <Item isPacked={true} name="Space suit" />
        <Item isPacked={true} name="Helmet with a golden leaf" />
        <Item isPacked={false} name="Photo of Tam" />
      </ul>

    </section>
  )
}

export default App
