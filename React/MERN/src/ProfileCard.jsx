import React from "react";

//Making a Profile Card Component
const ProfileCard = ({ avatar, name, age, occupation }) => {
    return (
        <div class="pro">
            <img src={avatar} alt="name" />
            <h2>{name}</h2>
            <h2>Age: {age}</h2>
            <p>Occupation: {occupation}</p>
        </div>
    )
}

export default ProfileCard




//App.jsx
// import ProfileCard from './ProfileCard';

//   <ProfileCard avatar="https://vcf.vn.ua/wp-content/uploads/ulybchivyj-yunosha.jpg" name="Kamrul" age="24" occupation="Web Developer" />
//   <ProfileCard avatar="https://vcf.vn.ua/wp-content/uploads/ulybchivyj-yunosha.jpg" name="Hasan" age="24" occupation="Web Developer" />
//   <ProfileCard avatar="https://vcf.vn.ua/wp-content/uploads/ulybchivyj-yunosha.jpg" name="Faysal " age="24" occupation="Web Developer" />