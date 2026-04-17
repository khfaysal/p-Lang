let Company = {
  companyId: 1,
  companyName: "ABC",
  isHiring: true,
  employees: [
    {
      name: "Kamrul Hasan",
      join: "1st April",
    },
    {
      name: "Jakia Sultana",
      join: "1st April",
    },
    {
      name: "Meherab",
      join: "3nd April",
    },
  ],
};
// 1. Answer
console.log(Company.employees);
console.log(Company.employees[1]);

//2.Answer
Company.employees.forEach((el) => {
  console.log(el.name);
});

// 3.Answer
Company.employees.forEach((el) => {
  if (el.join == "1st April") {
    console.log(el.name);
  }
});

//4.Answer:
console.log(Company.companyId);

//5.Answer:
console.log(Company.companyName);
