// Import the ProfileCard component
import ProfileCard from './ProfileCard';

// Main App component
function App() {
  return (
    <>
      {/* Render ProfileCard for Kamrul */}
      <ProfileCard avatar="https://vcf.vn.ua/wp-content/uploads/ulybchivyj-yunosha.jpg" name="Kamrul" age="24" occupation="Web Developer" />
      {/* Render ProfileCard for Hasan */}
      <ProfileCard avatar="https://vcf.vn.ua/wp-content/uploads/ulybchivyj-yunosha.jpg" name="Hasan" age="24" occupation="Web Developer" />
      {/* Render ProfileCard for Faysal */}
      <ProfileCard avatar="https://vcf.vn.ua/wp-content/uploads/ulybchivyj-yunosha.jpg" name="Faysal " age="24" occupation="Web Developer" />
    </>
  )
}

// Export the App component as default
export default App;