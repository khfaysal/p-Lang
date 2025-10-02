// Import React library
import React from "react";

// ProfileCard component displays user info
const ProfileCard = ({ avatar, name, age, occupation }) => {
    return (
        <div class="pro">
            {/* User avatar image */}
            <img src={avatar} alt="name" />
            {/* User name */}
            <h2>{name}</h2>
            {/* User age */}
            <h2>Age: {age}</h2>
            {/* User occupation */}
            <p>Occupation: {occupation}</p>
        </div>
    )
}

// Export ProfileCard component
export default ProfileCard