<?php
// Mikaela-Rose Porter
// Ask for the name
echo "Enter your name: ";
$name = fgets(STDIN);

// Ask for the year of birth
echo "Enter your year of birth: ";
$yearOfBirth = fgets(STDIN);

// Get current year
$currentYear = date("Y");

// Calculate age
$age = $currentYear - $yearOfBirth;

// Print message
echo "Hello, $name, you are $age years old.\n";
?>

