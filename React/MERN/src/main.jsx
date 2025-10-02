// Import React StrictMode for highlighting potential problems
import { StrictMode } from 'react'
// Import createRoot for rendering the app
import { createRoot } from 'react-dom/client'
// Import the main App component
import App from './App.jsx'

// Render the App component inside StrictMode to the root element
createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App />
  </StrictMode>,
)
